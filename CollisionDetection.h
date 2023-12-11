#pragma once

#include"Velocity.h"
#include"Point.h"


class CollisionDetection
{

public:

	CollisionDetection();
	~CollisionDetection();
	void setPointFirst(Point p);
	void setPointSecond(Point p);
	void setVelocityFirst(Velocity v);
	void setVelocitySecond(Velocity v);
	Point PointFirst();
	Point PointSecond();
	Point findCollisionPoint();



private:

	Point mPointFirst;
	Point mPointSecond;
	Velocity mVelocityFirst;
	Velocity mVelocitySecond;
};

