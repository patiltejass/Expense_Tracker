#include "homepage.h"
#include "ui_homepage.h"

Homepage::Homepage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}
