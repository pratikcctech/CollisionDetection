
# Hermite Class

## Overview

This C++ project includes a `Hermite` class designed for generating points along a Hermite curve based on control points.

## Features

- **Hermite Class**: The core functionality is encapsulated in the `Hermite` class, providing methods for generating points along a Hermite curve.
- **Constructor and Destructor**: The class includes a constructor for initializing control points and a destructor.
- **drawCurve Method**: Implements the Hermite curve algorithm to generate points along the curve.
- **Usage of Vectors**: The generated vertices and colors are stored in vectors (`mVertices` and `mColors`).

## Usage

1. **Include Headers**: Include "pch.h" and "Hermite.h" in your project.

   ```cpp
   #include "pch.h"
   #include "Hermite.h"
   ```

2. **Create Hermite Object**: Instantiate a `Hermite` object by providing control points.

   ```cpp
   Hermite myHermite(inP0, inP1, inP2, inP3);
   ```

3. **Generate Curve Points**: Use the `drawCurve` method to generate points along the Hermite curve.

   ```cpp
   vector<float> mVertices;
   vector<float> mColors;
   myHermite.drawCurve(inP0, inP1, inP2, inP3, mVertices, mColors);
   ```

4. **Access Result**: The generated vertices and colors are stored in the `mVertices` and `mColors` vectors.

   ```cpp
   // Access generated points
   float xCoord = mVertices[0];
   float yCoord = mVertices[1];

   // Access generated colors
   float redComponent = mColors[0];
   float greenComponent = mColors[1];
   float blueComponent = mColors[2];
   ```

## Snapshots

![image](https://github.com/pratikcctech/CollisionDetection/assets/149318512/281b9523-512c-4bb4-952e-8758b3d5d333)
