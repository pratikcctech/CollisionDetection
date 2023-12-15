#include "stdafx.h"
#include "Visualizer.h"
#include "OpenGLWindow.h"

Visualizer::Visualizer(QWindow* parent) : QMainWindow(nullptr)
{
    setupUi();
    connect(mRenderer, SIGNAL(dataUpdate()), mRenderer, SLOT(update()));
    connect(pushButton, &QPushButton::clicked, this, &Visualizer::calculate);
}

Visualizer::~Visualizer()
{}

void Visualizer::setupUi() {
    
    /////////////////////
    


    resize(1100, 700);
    centralWidget = new QWidget(this);
    
    gridLayoutWidget = new QWidget(centralWidget);
    gridLayoutWidget->setObjectName("gridLayoutWidget");
    gridLayoutWidget->setGeometry(QRect(0, 0, 901, 511));
    gridLayout = new QGridLayout(gridLayoutWidget);
    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    gridLayout->setObjectName("gridLayout");
    gridLayout->setContentsMargins(0, 0, 0, 0);
    pushButton = new QPushButton("calculate",gridLayoutWidget);
    //pushButton->setObjectName("pushButton");

    gridLayout->addWidget(pushButton, 0, 8, 2, 1);

    doubleSpinBox_8 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_8->setObjectName("doubleSpinBox_8");
    doubleSpinBox_8->setMinimum(-100.000000000000000);
    

    gridLayout->addWidget(doubleSpinBox_8, 1, 7, 1, 1);

    mRenderer = new OpenGLWindow(QColor(0,0,0) ,centralWidget);
    mRenderer->setObjectName("openGLWidget");
    

    gridLayout->addWidget(mRenderer, 2, 1, 1, 7);

    label_8 = new QLabel(gridLayoutWidget);
    label_8->setObjectName("label_8");
    label_8->setText("enter vy2");


    gridLayout->addWidget(label_8, 1, 6, 1, 1);

    label_2 = new QLabel(gridLayoutWidget);
    label_2->setObjectName("label_2");
    label_2->setText("enter y1");
    gridLayout->addWidget(label_2, 0, 2, 1, 1);

    doubleSpinBox_6 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_6->setObjectName("doubleSpinBox_6");
    doubleSpinBox_6->setMinimum(-100.000000000000000);
    doubleSpinBox_6->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox_6, 1, 3, 1, 1);

    doubleSpinBox_3 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_3->setObjectName("doubleSpinBox_3");
    doubleSpinBox_3->setMinimum(-100.000000000000000);
    doubleSpinBox_3->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox_3, 0, 5, 1, 1);

    label_7 = new QLabel(gridLayoutWidget);
    label_7->setObjectName("label_7");
    label_7->setText("enter vx2");
    gridLayout->addWidget(label_7, 1, 4, 1, 1);

    label = new QLabel(gridLayoutWidget);
    label->setObjectName("label");
    label->setText("enter x1");
    gridLayout->addWidget(label, 0, 0, 1, 1);

    label_3 = new QLabel(gridLayoutWidget);
    label_3->setObjectName("label_3");
    label_3->setText("enter vx1");
    gridLayout->addWidget(label_3, 0, 4, 1, 1);

    doubleSpinBox_7 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_7->setObjectName("doubleSpinBox_7");
    doubleSpinBox_7->setMinimum(-100.000000000000000);
    doubleSpinBox_7->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox_7, 1, 5, 1, 1);

    doubleSpinBox_5 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_5->setObjectName("doubleSpinBox_5");
    doubleSpinBox_5->setMinimum(-100.000000000000000);
    doubleSpinBox_5->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox_5, 1, 1, 1, 1);

    label_5 = new QLabel(gridLayoutWidget);
    label_5->setObjectName("label_5");
    label_5->setText("enter x2");

    gridLayout->addWidget(label_5, 1, 0, 1, 1);

    doubleSpinBox_2 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_2->setObjectName("doubleSpinBox_2");
    doubleSpinBox_2->setMinimum(-100.000000000000000);
    doubleSpinBox_2->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox_2, 0, 3, 1, 1);

    label_6 = new QLabel(gridLayoutWidget);
    label_6->setObjectName("label_6");
    label_6->setText("enter y2");
    gridLayout->addWidget(label_6, 1, 2, 1, 1);

    label_4 = new QLabel(gridLayoutWidget);
    label_4->setObjectName("label_4");
    label_4->setText("enter vy1");
    gridLayout->addWidget(label_4, 0, 6, 1, 1);

    doubleSpinBox_4 = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox_4->setObjectName("doubleSpinBox_4");
    doubleSpinBox_4->setMinimum(-100.000000000000000);
    doubleSpinBox_4->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox_4, 0, 7, 1, 1);

    doubleSpinBox = new QDoubleSpinBox(gridLayoutWidget);
    doubleSpinBox->setObjectName("doubleSpinBox");
    doubleSpinBox->setMinimum(-100.000000000000000);
    doubleSpinBox->setMaximum(100.000000000000000);
    gridLayout->addWidget(doubleSpinBox, 0, 1, 1, 1);

    setCentralWidget(centralWidget);
    statusBar = new QStatusBar(this);
    statusBar->setObjectName("statusBar");
    setStatusBar(statusBar);
    
    


    
}




void Visualizer::calculate()
{
    double x1 = doubleSpinBox->value();
    double y1 = doubleSpinBox_2->value();
    double x2 = doubleSpinBox_5->value();
    double y2 = doubleSpinBox_6->value();
    double vx1 = doubleSpinBox_3->value();
    double vy1 = doubleSpinBox_4->value();
    double vx2 = doubleSpinBox_7->value();
    double vy2 = doubleSpinBox_8->value();

    mRenderer->createcollison(x1, y1, x2, y2, vx1, vy1, vx2, vy2);
}
void Visualizer::onSpinBoxValueChanged(double value) {
    // Store the value in the member variable
    //mSpinBoxValue = value;
    // You can use mSpinBoxValue as needed in the rest of your code
    //mRenderer->c1.PointFirst().setX(value);
    
    //mValueLabel->setText(QString("Value: %1").arg(mSpinBoxValue));
}