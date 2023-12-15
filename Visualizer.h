#pragma once

#include <QtWidgets/QMainWindow>
#include "Visualizer.h"

class OpenGLWindow;

class Visualizer : public QMainWindow
{
    Q_OBJECT

public:
    Visualizer(QWindow* parent = nullptr);
    ~Visualizer();
    void onSpinBoxValueChanged(double value);
    void calculate();
    
private:
    void setupUi();
    

private:
    /*QMenuBar* mMenuBar;
    QToolBar* mMainToolBar;
    QWidget* mCentralWidget;
    QStatusBar* mStatusBar;*/
    OpenGLWindow* mRenderer;
    /*QDoubleSpinBox* mDoubleSpinBox;
    double mSpinBoxValue;
    QLabel* mValueLabel;*/

    QWidget* centralWidget;
    QDoubleSpinBox* doubleSpinBox;
    QLabel* label;
    QDoubleSpinBox* doubleSpinBox_2;
    QLabel* label_2;
    QLabel* label_3;
    QDoubleSpinBox* doubleSpinBox_3;
    QLabel* label_4;
    QDoubleSpinBox* doubleSpinBox_4;
    QDoubleSpinBox* doubleSpinBox_5;
    QDoubleSpinBox* doubleSpinBox_6;
    QDoubleSpinBox* doubleSpinBox_7;
    QDoubleSpinBox* doubleSpinBox_8;
    QLabel* label_5;
    QLabel* label_6;
    QLabel* label_7;
    QLabel* label_8;
    QPushButton* pushButton;
    QOpenGLWidget* openGLWidget;
    QToolBar* mainToolBar;
    QStatusBar* statusBar;
    QGridLayout* gridLayout;
    QWidget* gridLayoutWidget;
};