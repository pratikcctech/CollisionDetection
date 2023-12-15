#include "stdafx.h"
#include "OpenGLWindow.h"

#include <QOpenGLContext>
#include <QOpenGLPaintDevice>
#include <QOpenGLShaderProgram>
#include <QPainter>
#include"CollisionDetection.h"

OpenGLWindow::OpenGLWindow(const QColor& background, QWidget* parent) :
    mBackground(background)
{
    setParent(parent);
    setMinimumSize(500, 250);
}
OpenGLWindow::~OpenGLWindow()
{
    reset();
}

void OpenGLWindow::reset()
{
    // And now release all OpenGL resources.
    makeCurrent();
    delete mProgram;
    mProgram = nullptr;
    delete mVshader;
    mVshader = nullptr;
    delete mFshader;
    mFshader = nullptr;
    mVbo.destroy();
    doneCurrent();

    // We are done with the current QOpenGLContext, forget it. If there is a
    // subsequent initialize(), that will then connect to the new context.
    QObject::disconnect(mContextWatchConnection);
}

void OpenGLWindow::paintGL()
{

    glClear(GL_COLOR_BUFFER_BIT);

    mProgram->bind();

    QMatrix4x4 matrix;
    matrix.perspective(60.0f, 4.0f / 3.0f, 0.1f, 100.0f);
    matrix.translate(0, 0, -2);
    
    mProgram->setUniformValue(m_matrixUniform, matrix);

     
    std::vector<float> vertices;
    std::vector<float> colors;

    //verticesData = mVertices.data();
    //colorsData = mColors.data();


    for (int i = 0; i < mVertices.size()-1; i++) {
        vertices.push_back(mVertices[i].X());
        vertices.push_back(mVertices[i].Y());
        vertices.push_back(mVertices[i+1].X());
        vertices.push_back(mVertices[i+1].Y());
        colors.push_back(1.0f);
        colors.push_back(1.0f);
        colors.push_back(1.0f); 
        colors.push_back(1.0f);
        colors.push_back(1.0f);
        colors.push_back(1.0f);
        
    }

  //  createcollison();
    



    

    glVertexAttribPointer(m_posAttr, 2, GL_FLOAT, GL_FALSE, 0, vertices.data());
    glVertexAttribPointer(m_colAttr, 3, GL_FLOAT, GL_FALSE, 0, colors.data());

    glEnableVertexAttribArray(m_posAttr);
    glEnableVertexAttribArray(m_colAttr);

    glDrawArrays(GL_LINE_STRIP, 0, vertices.size()/2);

    glDisableVertexAttribArray(m_colAttr);
    glDisableVertexAttribArray(m_posAttr);


}

void OpenGLWindow::initializeGL()
{
    static const char* vertexShaderSource =
        "attribute highp vec4 posAttr;\n"
        "attribute lowp vec4 colAttr;\n"
        "varying lowp vec4 col;\n"
        "uniform highp mat4 matrix;\n"
        "void main() {\n"
        "   col = colAttr;\n"
        "   gl_Position = matrix * posAttr;\n"
        "}\n";

    static const char* fragmentShaderSource =
        "varying lowp vec4 col;\n"
        "void main() {\n"
        "   gl_FragColor = col;\n"
        "}\n";

    initializeOpenGLFunctions();

    mProgram = new QOpenGLShaderProgram(this);
    mProgram->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
    mProgram->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
    mProgram->link();
    m_posAttr = mProgram->attributeLocation("posAttr");
    Q_ASSERT(m_posAttr != -1);
    m_colAttr = mProgram->attributeLocation("colAttr");
    Q_ASSERT(m_colAttr != -1);
    m_matrixUniform = mProgram->uniformLocation("matrix");
    Q_ASSERT(m_matrixUniform != -1);

}

void OpenGLWindow::createcollison(double x1, double y1, double x2, double y2, double vx1, double vy1, double vx2, double vy2)
{
    mVertices.clear();
    mNormals.clear();


    CollisionDetection c1;
    c1.setPointFirst(Point(x1,y1));
    c1.setPointSecond(Point(x2,y2));
    c1.setVelocityFirst(Velocity(vx1,vy1));
    c1.setVelocitySecond(Velocity(vx2,vy2));
    c1.findCollisionPoint();

    mVertices << Point(c1.PointFirst().X(), c1.PointFirst().Y());
    mVertices << Point(c1.CollisionPoint().X(), c1.CollisionPoint().Y());
    mVertices << Point(c1.PointSecond().X(), c1.PointSecond().Y());
    emit dataUpdate();
}

void OpenGLWindow::addLines(double x1, double y1, double x2, double y2, double vx1, double vy1, double vx2, double vy2)
{
    //mVertices.push_back()
}