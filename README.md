# CollisionDetection

# OpenGL and QT Geometry Visualization
This project implements various algorithms for geometry visualization using OpenGL and QT libraries.
 
## Features
Visualization collision of the two point at different velocities
## Algorithms Implemented:
1. hidden surface removal
Provides an interactive graphical interface for drawing and manipulating shapes.
## Dependencies
QT
OpenGL
 
 
#### Include the necessary headers (OpenGLWindow.h, CollisionDetection.h, etc.) in your project.
#### Initialize the OpenGL window and use the provided functionalities (drawing shapes, applying algorithms).

# code implemented

```
void CollisionDetection::findCollisionPoint()
{
	double Time = (mPointSecond.X() - mPointFirst.X())/(mVelocityFirst.X()-mVelocitySecond.X());

	

	mCollisionPoint.setX(mPointFirst.X() + (mVelocityFirst.X() * Time));
	mCollisionPoint.setY(mPointFirst.Y() + (mVelocityFirst.Y() * Time));

}
