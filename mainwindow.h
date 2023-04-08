#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "gyudon.h"
#include "meat-comparator.h"
#include "onion-comparator.h"
#include "pickle-comparator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QHBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;
    QHBoxLayout *resultFieldLayout;
    Gyudon *gyudon1;
    Gyudon *gyudon2;
    void setLabel(QString string, QHBoxLayout &layout);
    void setButton();
    void removeDataFieldLayout();
    void clearLayout(QLayout *layout);

private slots:
    void buttonClickedMeat();
    void buttonClickedOnion();
    void buttonClickedPickle();
};
#endif // MAINWINDOW_H
