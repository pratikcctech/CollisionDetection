#include "stdafx.h"
#include "CollisionDetection.h"

CollisionDetection::CollisionDetection()
{
	
}

CollisionDetection::~CollisionDetection()
{

}

void CollisionDetection::setPointFirst(Point p)
{
	mPointFirst = p;
}
void CollisionDetection::setPointSecond(Point p)
{
	mPointSecond = p;
}

Point CollisionDetection::PointFirst()
{
	return mPointFirst;
}
Point CollisionDetection::PointSecond()
{
	return mPointSecond;
}

void CollisionDetection::setVelocityFirst(Velocity v)
{
	mVelocityFirst = v;
}
void CollisionDetection::setVelocitySecond(Velocity v)
{
	mVelocitySecond = v;
}

//the function to find the collision point of the two Point having different velocities
Point CollisionDetection::findCollisionPoint()
{
	double Time = (mPointSecond.X() - mPointFirst.X())/(mVelocityFirst.X()-mVelocitySecond.X());

	Point CollisionPoint;

	CollisionPoint.setX(mPointFirst.X() + (mVelocityFirst.X() * Time));
	CollisionPoint.setY(mPointFirst.Y() + (mVelocityFirst.Y() * Time));

	return CollisionPoint;
}
