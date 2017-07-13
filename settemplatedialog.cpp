#include "settemplatedialog.h"
#include "ui_settemplatedialog.h"

SetTemplateDialog::SetTemplateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetTemplateDialog)
{
    ui->setupUi(this);
}

SetTemplateDialog::~SetTemplateDialog()
{
    delete ui;
}
