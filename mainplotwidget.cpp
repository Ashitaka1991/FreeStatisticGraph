#include "mainplotwidget.h"
#include "ui_mainplotwidget.h"

MainPlotWidget::MainPlotWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPlotWidget)
{
    ui->setupUi(this);
}

MainPlotWidget::~MainPlotWidget()
{
    delete ui;
}
