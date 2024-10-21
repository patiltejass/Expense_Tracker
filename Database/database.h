#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QCryptographicHash>

class Database {
public:
    static Database* getInstance();
    bool insertUser(const QString& userName, const QString& password);
    QString getPasswordForUser(const QString& userName, const QString& password); // Updated method to get password and verify
    bool userExists(const QString& userName);
private:
    Database();
    ~Database();
    bool openConnection();
    void closeConnection();
    bool createTable();

    QSqlDatabase db;
};

#endif // DATABASE_H
