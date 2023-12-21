

# B-Spline Curve Evaluation

## Overview

This C++ project implements the B-Spline curve algorithm using the `BSpline` class. B-Spline curves are widely used in computer graphics and CAD for smooth and flexible curve representations.

## Features

- **BSpline Class**: The core functionality is encapsulated in the `BSpline` class, allowing users to create B-Spline curves with a specified degree.
- **Uniform Knot Generation**: The class provides a method to generate uniform knots based on the number of control points.
- **B-Spline Basis Functions**: The implementation includes a function to compute B-Spline basis functions, a fundamental component of the algorithm.
- **Curve Evaluation**: The `evaluate` function computes B-Spline curve points based on a set of control points.

## Usage

1. **Include Headers**: Include "pch.h" and "BSpline.h" in your project.
   
   ```cpp
   #include "pch.h"
   #include "BSpline.h"
   ```

2. **Create BSpline Object**: Instantiate a `BSpline` object with the desired degree.

   ```cpp
   BSpline myBSpline(3); // Example with degree 3
   ```

3. **Generate Knots**: Use the `generateUniformKnots` method to obtain uniform knots.

   ```cpp
   int numControlPoints = 5; // Replace with your desired number of control points
   std::vector<float> knots = myBSpline.generateUniformKnots(numControlPoints);
   ```

4. **Evaluate Curve**: Utilize the `evaluate` function to compute B-Spline curve points.

   ```cpp
   std::vector<Point> controlPoints = /* Provide your control points */;
   float numSamples = 100; // Number of samples for curve evaluation
   std::vector<Point> curvePoints = myBSpline.evaluate(controlPoints, numSamples);
   ```

## Snapshots
![image](https://github.com/pratikcctech/CollisionDetection/assets/149318512/327b0f0d-a660-4b99-b621-8f3e340f1ecd)
