/*
  Head.cpp - Library for servo control for humanoids.
  Created by Juan Carlos Garza Sanchez, August 8, 2015.
*/

#include "Arduino.h"
#include "Head.h"
#include "Servo.h"

Head::Head(int *pins, int servosLength) : HumanoidObject(pins, servos, servosLength)
{
	this->servosLength = servosLength;
}

void Head::goToCurrent()
{
	writeServos(currentPosition);
}

void Head::move(int positionsNum, int positions[][MAX_SERVO_NUM], float movementSpeed, float milInTick, int Total_Ticks)
{
	currentPosition = positions[Total_Ticks];
	futurePosition = (Total_Ticks + 1 < positionsNum) ? positions[Total_Ticks + 1] : positions[Total_Ticks];

	int servoPosition[MAX_SERVO_NUM];
	for(int i = 0; i < servosLength;i++) 
	{
		if (currentPosition[i] > futurePosition[i])
			servoPosition[i] = currentPosition[i] - (((currentPosition[i] - futurePosition[i]) / movementSpeed) * milInTick);
		else
			servoPosition[i] = currentPosition[i] + (((futurePosition[i] - currentPosition[i]) / movementSpeed) * milInTick);
	}

	writeServos(servoPosition);
}