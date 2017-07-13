#ifndef CHOOSEDATADIALOG_H
#define CHOOSEDATADIALOG_H

#include <QDialog>

namespace Ui {
class ChooseDataDialog;
}

class ChooseDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseDataDialog(QWidget *parent = 0);
    ~ChooseDataDialog();

private:
    Ui::ChooseDataDialog *ui;
};

#endif // CHOOSEDATADIALOG_H
