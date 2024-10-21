#include "service.h"
#include <QMessageBox>
#include <QDebug>

Service::Service() {
    d1 = Database::getInstance();  // Use the singleton instance.
}

void Service::slott(QString username, QString password) {
    if(d1->userExists(username)){
        emit updatestatus("User Present");
    }
    else{
        if (d1->insertUser(username, password)) {
            emit updatestatus("true");
        } else {
            emit updatestatus("false");
        }
    }
}
void Service::loginslott(QString username, QString password) {
    QString result = d1->getPasswordForUser(username, password);

    if (result == "No user found") {
        emit loginstatus("No user found");
    } else if (result == "User verified successfully.") {
        emit loginstatus("true");
    } else if (result == "Invalid password.") {
        emit loginstatus("false");
    } else {
        emit loginstatus("Database error");
    }
}

