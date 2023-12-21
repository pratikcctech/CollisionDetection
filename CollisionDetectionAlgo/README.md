
# Collision Detection

## Overview

This C++ project includes a `CollisionDetection` class designed for basic collision detection between two moving points in 2D space. The class calculates the collision point based on the positions and velocities of two points.

## Features

- **CollisionDetection Class**: The core functionality is encapsulated in the `CollisionDetection` class, facilitating collision point calculations.
- **Point and Velocity Setting**: Methods like `setPointFirst`, `setPointSecond`, `setVelocityFirst`, and `setVelocitySecond` allow users to set the initial points and velocities.
- **Collision Point Computation**: The `findCollisionPoint` method computes the point of collision between the two moving entities.

## Usage

1. **Include Headers**: Include "pch.h" and "CollisionDetection.h" in your project.

   ```cpp
   #include "pch.h"
   #include "CollisionDetection.h"
   ```

2. **Create CollisionDetection Object**: Instantiate a `CollisionDetection` object.

   ```cpp
   CollisionDetection collisionDetector;
   ```

3. **Set Points and Velocities**: Use the `setPointFirst`, `setPointSecond`, `setVelocityFirst`, and `setVelocitySecond` methods to set the initial points and velocities.

   ```cpp
   collisionDetector.setPointFirst(/* Your initial Point object */);
   collisionDetector.setPointSecond(/* Your initial Point object */);
   collisionDetector.setVelocityFirst(/* Your initial Velocity object */);
   collisionDetector.setVelocitySecond(/* Your initial Velocity object */);
   ```

4. **Find Collision Point**: Call the `findCollisionPoint` method to compute the collision point.

   ```cpp
   collisionDetector.findCollisionPoint();
   Point collisionPoint = collisionDetector.CollisionPoint();
   ```
## Snapshots

![image](https://github.com/pratikcctech/CollisionDetection/assets/149318512/04ac1e52-02cc-4392-8a29-ef2292f5e835)
