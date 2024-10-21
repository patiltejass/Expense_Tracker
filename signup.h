#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include<bits/stdc++.h>
#include"Service/service.h"
// #include"login.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class SignUp;
}
QT_END_NAMESPACE

class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    SignUp(QWidget *parent = nullptr);
    ~SignUp();
signals:
    void emitsig(QString,QString);
    void emitlogin(QString,QString);
private slots:
    void on_pushButton_clicked();
    void statusreceiver(QString status);
    void loginreceiver(QString status);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::SignUp *ui;
    QString username;
    QString pass;
    QString confpass;
    Service *s1;
    // Login *l1;


};
#endif // SIGNUP_H
