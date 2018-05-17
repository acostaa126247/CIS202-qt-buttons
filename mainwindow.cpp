#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    button1 = new QPushButton("LED 1", this);
    button2 = new QPushButton("LED 2", this);
    button3 = new QPushButton("LED 3", this);

    button1->setCheckable(true);
    button2->setCheckable(true);
    button3->setCheckable(true);

    label1 = new QLabel("OFF", this);
    label2 = new QLabel("OFF", this);
    label3 = new QLabel("OFF", this);

    button1->move(button1->pos()+QPoint(button1->width(), 0));
    button2->move(button2->pos()+QPoint(button2->width(), 20));
    button3->move(button3->pos()+QPoint(button3->width(), 40));
    label1->move(button1->pos()+QPoint(button1->width(), 0));
    label2->move(button2->pos()+QPoint(button2->width(), 0));
    label3->move(button3->pos()+QPoint(button3->width(), 0));

    connect(button1, SIGNAL(toggled(bool)), this, SLOT(onbutton1Press(bool)));
    connect(button2, SIGNAL(toggled(bool)), this, SLOT(onbutton2Press(bool)));
    connect(button3, SIGNAL(toggled(bool)), this, SLOT(onbutton3Press(bool)));
}

void MainWindow::onbutton1Press(bool toggled)
{
    qDebug() << toggled;
    if(toggled)
    {
        label1->setText("ON");
    }
    else
    {
        label1->setText("OFF");
    }
}

void MainWindow::onbutton2Press(bool toggled)
{
    qDebug() << toggled;
    if(toggled)
    {
        label2->setText("ON");
    }
    else
    {
        label2->setText("OFF");
    }
}

void MainWindow::onbutton3Press(bool toggled)
{
    qDebug() << toggled;
    if(toggled)
    {
        label3->setText("ON");
    }
    else
    {
        label3->setText("OFF");
    }
}
