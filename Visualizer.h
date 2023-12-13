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

private:
    void setupUi();

private:
    QMenuBar* mMenuBar;
    QToolBar* mMainToolBar;
    QWidget* mCentralWidget;
    QStatusBar* mStatusBar;
    OpenGLWindow* mRenderer;
    QDoubleSpinBox* mDoubleSpinBox;
    double mSpinBoxValue;
    QLabel* mValueLabel;

};