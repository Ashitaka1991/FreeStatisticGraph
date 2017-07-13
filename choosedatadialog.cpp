#include "choosedatadialog.h"
#include "ui_choosedatadialog.h"

ChooseDataDialog::ChooseDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseDataDialog)
{
    ui->setupUi(this);
}

ChooseDataDialog::~ChooseDataDialog()
{
    delete ui;
}
