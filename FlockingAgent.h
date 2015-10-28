#pragma once
#include "Vehicle.h"
class FlockingAgent :
	public Vehicle
{
public:
	FlockingAgent(GameWorld * world,
		Vector2D position,
		double rotation,
		Vector2D velocity,
		double mass,
		double max_force,
		double max_speed,
		double max_turn_rate,
		double scale);
	~FlockingAgent();
};

