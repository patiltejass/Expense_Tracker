#include "database.h"

Database* Database::getInstance() {
    static Database* _instance = nullptr;
    if (!_instance) {
        _instance = new Database();
        _instance->db = QSqlDatabase::addDatabase("QSQLITE");
        _instance->db.setDatabaseName("UserDetails.db");

        if (_instance->db.open()) {
            _instance->createTable();
        } else {
            qDebug() << "Error in adding the database: " << _instance->db.lastError().text();
        }
    }
    return _instance;
}

Database::Database() {
    // Constructor is private and should not perform database operations.
}

Database::~Database() {
    closeConnection();
}

bool Database::openConnection() {
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "Error: " << db.lastError().text();
            return false;
        }
    }
    return true;
}

void Database::closeConnection() {
    if (db.isOpen()) {
        db.close();
    }
}

bool Database::createTable() {
    QSqlQuery query;
    query.prepare("CREATE TABLE IF NOT EXISTS user ("
                  "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                  "user_name TEXT UNIQUE, "
                  "password TEXT)");
    if (!query.exec()) {
        qDebug() << "Error creating table: " << query.lastError().text();
        return false;
    }
    qDebug() << "User table created successfully.";
    return true;
}

bool Database::insertUser(const QString& userName, const QString& password) {
    if (!db.isOpen() && !openConnection()) {
        qDebug() << "Database is not open.";
        return false;
    }

    // Check if the user already exists
    if (userExists(userName)) {
        qDebug() << "User already exists: " << userName;
        return false;
    }

    // Hash the password before storing
    QString hashedPassword = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());

    QSqlQuery query;
    query.prepare("INSERT INTO user (user_name, password) VALUES (:user_name, :password)");
    query.bindValue(":user_name", userName);
    query.bindValue(":password", hashedPassword);

    if (!query.exec()) {
        qDebug() << "Error inserting user: " << query.lastError().text();
        return false;
    }
    qDebug() << "User inserted successfully: " << userName;

    return true;
}

QString Database::getPasswordForUser(const QString& userName, const QString& password) {
    if (!db.isOpen() && !openConnection()) {
        return "Database is not open.";
    }

    QSqlQuery query;
    query.prepare("SELECT password FROM user WHERE user_name = :user_name");
    query.bindValue(":user_name", userName);

    if (!query.exec()) {
        qDebug() << "Error fetching password: " << query.lastError().text();
        return "";
    }

    if (query.next()) {
        QString storedHashedPassword = query.value(0).toString();  // Retrieve the stored hashed password

        // Hash the input password
        QString hashedInputPassword = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());

        // Compare the stored hashed password with the hashed input password
        if (storedHashedPassword == hashedInputPassword) {
            return "User verified successfully.";
        } else {
            return "Invalid password.";
        }
    } else {
        return "No user found.";
    }
}

bool Database::userExists(const QString& userName) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user WHERE user_name = :user_name");
    query.bindValue(":user_name", userName);
    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}
