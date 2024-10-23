/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QTextEdit *textEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QTextEdit *textEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QTextEdit *textEdit_6;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QWidget *page_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QTextEdit *textEdit_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QTextEdit *textEdit_8;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QPushButton *pushButton_4;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(800, 661);
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(50, 40, 691, 541));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 100, 431, 343));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(25);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(99);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, 10, 10, 10);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setFont(font);

        horizontalLayout_4->addWidget(textEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(103);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, 10, 10, 10);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        textEdit_5 = new QTextEdit(layoutWidget);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setFont(font);

        horizontalLayout_5->addWidget(textEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(45);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(10, 10, 10, 10);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_6->addWidget(label_7);

        textEdit_6 = new QTextEdit(layoutWidget);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setFont(font);

        horizontalLayout_6->addWidget(textEdit_6);


        verticalLayout_2->addLayout(horizontalLayout_6);

        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 460, 141, 51));
        pushButton->setFont(font);
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 10, 121, 20));
        label_4->setFont(font);
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(530, 40, 101, 31));
        pushButton_2->setFont(font);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        layoutWidget_2 = new QWidget(page_4);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(60, 140, 397, 227));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(25);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(45);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(10, 10, 10, 10);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        textEdit_7 = new QTextEdit(layoutWidget_2);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setFont(font);

        horizontalLayout_7->addWidget(textEdit_7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(50);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, 10, 10, 10);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_8->addWidget(label_9);

        textEdit_8 = new QTextEdit(layoutWidget_2);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setFont(font);

        horizontalLayout_8->addWidget(textEdit_8);


        verticalLayout_3->addLayout(horizontalLayout_8);

        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(180, 400, 131, 51));
        pushButton_3->setFont(font);
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(500, 0, 171, 20));
        label_10->setFont(font);
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(522, 30, 121, 31));
        pushButton_4->setFont(font);
        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        SignUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignUp);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SignUp->setMenuBar(menubar);
        statusbar = new QStatusBar(SignUp);
        statusbar->setObjectName("statusbar");
        SignUp->setStatusBar(statusbar);

        retranslateUi(SignUp);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "SignUp", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "Username:", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Password:", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Confirm Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "SignUp", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Already A User!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SignUp", "Login", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", "Username:", nullptr));
        label_9->setText(QCoreApplication::translate("SignUp", "Password:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SignUp", "Login", nullptr));
        label_10->setText(QCoreApplication::translate("SignUp", "New User! Plss SignUp", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SignUp", "SignUp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
