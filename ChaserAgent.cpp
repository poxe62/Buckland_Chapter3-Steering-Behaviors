#include "ChaserAgent.h"
#include "Vehicle.h"
#include "SteeringBehaviors.h"




ChaserAgent::ChaserAgent(GameWorld * world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale, Vehicle* predecessor) : Vehicle(world,position,rotation,velocity,mass,max_force,max_speed,max_turn_rate,scale)
{
	this->predecessor = predecessor;
	this->offset = Vector2D(3, 3);

	this->Steering()->OffsetPursuitOn(predecessor, offset);
	this->Steering()->SeparationOn();
}

ChaserAgent::~ChaserAgent()
{
}
