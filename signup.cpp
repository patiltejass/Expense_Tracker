#include "signup.h"
#include "./ui_signup.h"
#include<QMessageBox>

SignUp::SignUp(QWidget *parent)
    : QMainWindow(parent),
     s1(new Service),
     // l1(new Login)
     ui(new Ui::SignUp)
{
    ui->setupUi(this);
    connect(this,&SignUp::emitsig,s1,&Service::slott);
    connect(s1,&Service::updatestatus,this,&SignUp::statusreceiver);
    connect(this, &SignUp::emitlogin, s1, &Service::loginslott);
    connect(s1,&Service::loginstatus,this,&SignUp::loginreceiver);
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    username = ui->textEdit_4->toPlainText();
    pass = ui->textEdit_5->toPlainText();
    confpass= ui->textEdit_6->toPlainText();
    if(pass==confpass){
        emit emitsig(username,pass);
        // QMessageBox::warning(nullptr, "Error", "Password and confirmation password do not match.");
    }
    else{
        QMessageBox::warning(nullptr, "Error", "Password and confirmation password do not match.");
    }
}

void SignUp::statusreceiver(QString status){

    if(status=="User Present"){
        QMessageBox::warning(nullptr, "Error", "User Already exists");
    }
    else{
        if(status=="true"){
             QMessageBox::information(nullptr, "Success", "User Registered Sucessfully");
            ui->stackedWidget->setCurrentWidget(ui->page_4);
        }
        else{
             QMessageBox::warning(nullptr, "Error", "Failed to register a user");
        }
    }
}

void SignUp::loginreceiver(QString status)
{
    if(status=="No user found"){
        QMessageBox::warning(nullptr, "Error", "No User Found");
        ui->stackedWidget->setCurrentWidget(ui->page_3);
    }
    else{
        if(status=="true"){
            QMessageBox::information(nullptr, "Success", "Logged in Sucessfully");
            ui->stackedWidget->setCurrentWidget(ui->page_2);
        }
        else{
            QMessageBox::warning(nullptr, "Error", "Password does not Matched");
        }
    }
}

void SignUp::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);
}


void SignUp::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


void SignUp::on_pushButton_3_clicked()
{
    username = ui->textEdit_7->toPlainText();
    pass = ui->textEdit_8->toPlainText();
    emit emitlogin(username,pass);
}


void SignUp::on_pushButton_5_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->page);
}

