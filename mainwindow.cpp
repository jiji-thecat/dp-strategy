#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout();
    iconFieldLayout = new QHBoxLayout();
    buttonFieldLayout = new QHBoxLayout();
    resultFieldLayout = new QHBoxLayout();

    gyudon1 = new Gyudon(5, 0, 5);
    gyudon2 = new Gyudon(0, 5, 5);

    setLabel("gyudon1.png", *iconFieldLayout);
    setLabel("gyudon2.png", *iconFieldLayout);
    setButton();

    rootLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(iconFieldLayout);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(resultFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearLayout(QLayout* layout)
{
    while (QLayoutItem* item = layout->takeAt(0))
    {
        if (QWidget* widget = item->widget()) {
            widget->deleteLater();
        }
        if (QLayout* childLayout = item->layout()) {
            clearLayout(childLayout);
        }
        delete item;
    }
}

void MainWindow::removeDataFieldLayout(){
    clearLayout(resultFieldLayout);
}

void MainWindow::buttonClickedMeat()
{
    qDebug() << "clicked" ;
    removeDataFieldLayout();

    MeatComparator meatComparator;
    // 間接参照受け取りなので、実体を渡す
    int result = meatComparator.compare(*gyudon1, *gyudon2);

    if(result == 1){
        // gyudon1優勝
        setLabel("gyudon1.png", *resultFieldLayout);
    }
    else if (result == 0){
        // gyudon2優勝
        setLabel("gyudon2.png", *resultFieldLayout);
    } else {
        //同じ
        setLabel("gyudon1.png", *resultFieldLayout);
        setLabel("gyudon2.png", *resultFieldLayout);
    }
}

void MainWindow::buttonClickedOnion()
{
    qDebug() << "clicked" ;
    removeDataFieldLayout();

    OnionComparator onionComparator;
    int result = onionComparator.compare(*gyudon1, *gyudon2);

    if(result == 1){
        // gyudon1優勝
        setLabel("gyudon1.png", *resultFieldLayout);
    }
    else if (result == 0){
        // gyudon2優勝
        setLabel("gyudon2.png", *resultFieldLayout);
    } else {
        //同じ
        setLabel("gyudon1.png", *resultFieldLayout);
        setLabel("gyudon2.png", *resultFieldLayout);
    }
}

void MainWindow::buttonClickedPickle()
{
    qDebug() << "clicked" ;
    removeDataFieldLayout();

    PickleComparator pickleComparator;
    int result = pickleComparator.compare(*gyudon1, *gyudon2);

    if(result == 1){
        // gyudon1優勝
        setLabel("gyudon1.png", *resultFieldLayout);
    }
    else if (result == 0){
        // gyudon2優勝
        setLabel("gyudon2.png", *resultFieldLayout);
    } else {
        //同じ
        setLabel("gyudon1.png", *resultFieldLayout);
        setLabel("gyudon2.png", *resultFieldLayout);
    }
}

void MainWindow::setButton()
{
    QPushButton *button = new QPushButton("&Compare Meat", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClickedMeat()));
    buttonFieldLayout->addWidget(button);

    button = new QPushButton("&Compare Onion", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClickedOnion()));
    buttonFieldLayout->addWidget(button);

    button = new QPushButton("&Compare Pickle", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClickedPickle()));
    buttonFieldLayout->addWidget(button);
}

void MainWindow::setLabel(QString string, QHBoxLayout &layout)
{
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap(":/assets/" + string);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    layout.addWidget(label);
}


