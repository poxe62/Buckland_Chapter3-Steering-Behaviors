#pragma once
#include "Vehicle.h"
class ChaserAgent :
	public Vehicle
{

private:
	Vehicle* predecessor;
	Vector2D offset;

public:
	ChaserAgent(GameWorld* world,
		Vector2D position,
		double rotation,
		Vector2D velocity,
		double mass,
		double max_force,
		double max_speed,
		double max_turn_rate,
		double scale,
		Vehicle* predecessor);

	~ChaserAgent();

	void setOffset(Vector2D vect) { this->offset = vect; }
	Vector2D getOffset() { return this->offset; }
};

