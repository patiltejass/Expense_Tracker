#ifndef SERVICE_H
#define SERVICE_H

#include "../Database/database.h"
#include <QObject>
#include <QWidget>

class Service : public QObject {
    Q_OBJECT

public:
    Service();

signals:
    void updatestatus(QString);
    void loginstatus(QString);

public slots:
    void slott(QString username, QString pass);
    void loginslott(QString username, QString pass);

private:
    Database* d1;
};

#endif // SERVICE_H
