/*
  HumanoidObject.cpp - Library for servo control for humanoids.
  Created by Juan Carlos Garza Sanchez, August 8, 2015.
*/

#include "Arduino.h"
#include "HumanoidObject.h"
#include "Servo.h"

HumanoidObject::HumanoidObject(int *pins, Servo *servos, int servosLength)
{
	this->servosLength = servosLength;
	this->servos = servos;
	_pins = pins;
}

void HumanoidObject::setDefaults(int *degrees)
{
	defaultPositions = degrees;
}

void HumanoidObject::writeServos(int *degrees)
{
	for(int i = 0; i < servosLength; i++)
		servos[i].write(*(degrees + i));
}

void HumanoidObject::attachServos()
{
	for(int i = 0; i < servosLength;i++)
	{
		servos[i].attach(*(_pins + i));
	}
}

void HumanoidObject::detachServos()
{
	for(int i = 0; i < servosLength;i++)
	{
		servos[i].detach();
	}
}

void HumanoidObject::gotoDefault()
{
	writeServos(defaultPositions);
}