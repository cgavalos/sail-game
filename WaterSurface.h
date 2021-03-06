#pragma once

#include "Player.h"
#include "WaterSurfacePhysicsComponent.h"
#include "WaterSurfaceGraphicsComponent.h"
#include "PointForce.h"
#include "Triangle.h"

class WaterSurface {
private:
	WaterSurfacePhysicsComponent wspc;
	WaterSurfaceGraphicsComponent wsgc;
public:
	WaterSurface(size_t gridUnitsPerSide, float gridWidth);
	WaterSurfacePhysicsComponent const & getPhysicsComponent() const;
	WaterSurfaceGraphicsComponent const & getGraphicsComponent() const;
	void update(Player const & player);
	PointForce buoyantForce(Triangle const & t) const;
};