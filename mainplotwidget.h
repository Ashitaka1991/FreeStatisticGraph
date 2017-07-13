#ifndef MAINPLOTWIDGET_H
#define MAINPLOTWIDGET_H

#include <QWidget>

namespace Ui {
class MainPlotWidget;
}

class MainPlotWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainPlotWidget(QWidget *parent = 0);
    ~MainPlotWidget();

private:
    Ui::MainPlotWidget *ui;
};

#endif // MAINPLOTWIDGET_H
