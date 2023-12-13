#include "stdafx.h"
#include "Visualizer.h"
#include "OpenGLWindow.h"

Visualizer::Visualizer(QWindow* parent) : QMainWindow(nullptr)
{
    setupUi();
}

Visualizer::~Visualizer()
{}

void Visualizer::setupUi() {
    resize(600, 400);
    mMenuBar = new QMenuBar(this);
    mMenuBar->setObjectName("menuBar");
    setMenuBar(mMenuBar);
    
    mMainToolBar = new QToolBar(this);
    mMainToolBar->setObjectName("mainToolBar");
    addToolBar(mMainToolBar);
    mStatusBar = new QStatusBar(this);
    mStatusBar->setObjectName("statusBar");
    setStatusBar(mStatusBar);
    mDoubleSpinBox = new QDoubleSpinBox(this);
    mDoubleSpinBox->setFixedSize(100, 30);
    mMainToolBar->addWidget(mDoubleSpinBox);
    connect(mDoubleSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
        this, &Visualizer::onSpinBoxValueChanged);

    mValueLabel = new QLabel(this);
    mValueLabel->setText("Value: ");
    mMainToolBar->addWidget(mValueLabel);
    mRenderer = new OpenGLWindow(QColor(0, 0, 0), this);
    setCentralWidget(mRenderer);
    

    setWindowTitle(QCoreApplication::translate("CollisionDetection", "CollisionDetection", nullptr));

}

void Visualizer::onSpinBoxValueChanged(double value) {
    // Store the value in the member variable
    mSpinBoxValue = value;
    // You can use mSpinBoxValue as needed in the rest of your code
    mRenderer->c1.PointFirst().setX(value);
    
    mValueLabel->setText(QString("Value: %1").arg(mSpinBoxValue));
}