#include "collider.h"

// ColliderIface class
ColliderIface::ColliderIface() {}

// ColliderRound class
ColliderRound::ColliderRound(float argRadius)
: radius(argRadius) {}

void ColliderRound::accumulateForce(Vec2 argForce)
{}
