/*
  Arm.h - Library for servo control for humanoids.
  Created by Juan Carlos Garza Sanchez, August 8, 2015.
*/

#ifndef Arm_h
#define Arm_h

#include "Arduino.h"
#include "Servo.h"
#include "HumanoidObject.h"

#define MAX_SERVO_NUM 4

class Arm: public HumanoidObject
{
	public:
		Arm(int *pins);
		void move(int positionsNum, int positions[][MAX_SERVO_NUM], float movementSpeed, float milInTick, int Total_Ticks);
	private:
		Servo servos[MAX_SERVO_NUM];
		int *currentPositions;
		int *futurePositions;

};
#endif