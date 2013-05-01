#include "MainDialog.h"
#include "ui_MainDialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);

    //Test 1
    //add something to commit
}

MainDialog::~MainDialog()
{
    delete ui;
}
