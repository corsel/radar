#ifndef _COLLIDER_H_INCLUDED
#define _COLLIDER_H_INCLUDED

#include "utils.h"

class ColliderIface // abstract class
{
private:
public:
	ColliderIface(void);
	virtual void accumulateForce(Vec2 argForce) = 0;
};

class ColliderRound : public ColliderIface
{
private:
	float radius;
public:
	ColliderRound(float argRadius);
	void accumulateForce(Vec2 argForce); // virtual implementation
};

#endif // _COLLIDER_H_INCLUDED
