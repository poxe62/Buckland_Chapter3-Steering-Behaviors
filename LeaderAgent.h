#pragma once
#include "Vehicle.h"

using namespace std;

class LeaderAgent :
	public Vehicle
{
public:
	LeaderAgent(string controller,
		GameWorld* world,
		Vector2D position,
		double rotation,
		Vector2D velocity,
		double mass,
		double max_force,
		double max_speed,
		double max_turn_rate,
		double scale);
	~LeaderAgent();
};

