
# Point Class

## Overview

This C++ project includes a `Point` class designed for representing 2D points with x and y coordinates.

## Features

- **Point Class**: The core functionality is encapsulated in the `Point` class, providing methods for setting and retrieving x and y coordinates.
- **Constructors**: The class includes constructors for creating points with default or specified coordinates.
- **Setter and Getter Methods**: Methods like `setX`, `setY`, `X`, and `Y` allow users to manipulate and retrieve the coordinates of the point.

## Usage

1. **Include Headers**: Include "pch.h" and "Point.h" in your project.

   ```cpp
   #include "pch.h"
   #include "Point.h"
   ```

2. **Create Point Object**: Instantiate a `Point` object.

   ```cpp
   Point myPoint; // Creates a point with default coordinates (0, 0)
   ```

3. **Set and Retrieve Coordinates**: Use the `setX`, `setY`, `X`, and `Y` methods to manipulate and retrieve the coordinates.

   ```cpp
   myPoint.setX(5.0);
   myPoint.setY(10.0);

   double xCoord = myPoint.X();
   double yCoord = myPoint.Y();
   ```
