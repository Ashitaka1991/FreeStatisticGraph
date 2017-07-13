#ifndef SETTEMPLATEDIALOG_H
#define SETTEMPLATEDIALOG_H

#include <QDialog>

namespace Ui {
class SetTemplateDialog;
}

class SetTemplateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetTemplateDialog(QWidget *parent = 0);
    ~SetTemplateDialog();

private:
    Ui::SetTemplateDialog *ui;
};

#endif // SETTEMPLATEDIALOG_H
