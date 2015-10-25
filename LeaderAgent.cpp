#include "LeaderAgent.h"
#include "SteeringBehaviors.h"




LeaderAgent::LeaderAgent(string controller, GameWorld* world,Vector2D position,double rotation,Vector2D velocity,double mass,double max_force,double max_speed,double max_turn_rate,double scale) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale){
	this->Steering()->FlockingOff();
	this->SetScale(Vector2D(10, 10));
	this->SetMaxSpeed(70);

	//si le leader est controlé par l'IA
	if (controller == "IA") {
		this->Steering()->WanderOn();
	}

	//si le leader est controlé par un humain
	else if(controller == "Human"){
		this->Steering()->HumanControlOn();
	}
}


LeaderAgent::~LeaderAgent()
{
}
