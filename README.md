# CollisionDetection

# OpenGL and QT Geometry Visualization
This project implements various algorithms for geometry visualization using OpenGL and QT libraries.
1. Collision Detection
2. Bezier curve
3. Hermite curve
4. B-Spline curve
 
## Features
1. The calculateCollision function handles collision detection based on user input (positions and velocities),It uses a CollisionDetection class to perform the collision detection algorithm and updates the OpenGL window with the collision points.
2. The bezierClicked function handles the calculation and rendering of a Bezier curve based on user input,It uses a Bezier class to calculate the Bezier curve and updates the OpenGL window with the generated curve.
3. The hermiteClicked function handles the calculation and rendering of a Hermite curve based on user input,It uses a Hermite class to calculate the Hermite curve and updates the OpenGL window with the generated curve.
4. The bSplineClicked function handles the calculation and rendering of a B-Spline curve based on user input,It uses a BSpline class to calculate the B-Spline curve and updates the OpenGL window with the generated curve.
5. The setupUi function sets up the user interface using Qt widgets like buttons, labels, and spin boxes,It creates tabs for Collision Detection, Bezier, Hermite, and B-Spline, and sets up the layout for user input.


## Algorithms Implemented:
1. Collision Detection
2. Bezier curve
3. Hermite curve
4. B-Spline curve
Provides an interactive graphical interface for drawing and manipulating shapes.
## Dependencies
1. QT
2. OpenGL
3. CollisionDetection Algo DLL
4. Bezier DLL
5. hermite DLL
6. b_spline DLL
 
 
#### Include the necessary headers (OpenGLWindow.h, CollisionDetection.h, etc.) in your project.
#### Initialize the OpenGL window and use the provided functionalities (drawing shapes, applying algorithms).


