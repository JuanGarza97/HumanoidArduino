/*
  Arm.cpp - Library for servo control for humanoids.
  Created by Juan Carlos Garza Sanchez, August 8, 2015.
*/

#include "Arduino.h"
#include "Arm.h"
#include "Servo.h"

Arm::Arm(int *pins) : HumanoidObject(pins, servos, currentPositions, MAX_SERVO_NUM){}

void Arm::move(int positionsNum, int positions[][MAX_SERVO_NUM], float movementSpeed, float milInTick, int Total_Ticks)
{
	currentPositions = positions[Total_Ticks];
	futurePositions = (Total_Ticks + 1 < positionsNum) ? positions[Total_Ticks + 1] : positions[Total_Ticks];

	int servoPosition = 0;
	for(int i = 0; i < MAX_SERVO_NUM; i++)
	{
		if (currentPositions[i] > futurePositions[i])
			servoPosition = currentPositions[i] - (((currentPositions[i] - futurePositions[i]) / movementSpeed) * milInTick);
		else
			servoPosition = currentPositions[i] + (((futurePositions[i] - currentPositions[i]) / movementSpeed) * milInTick);
		servos[i].write(servoPosition);
	}
}