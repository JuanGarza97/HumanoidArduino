/*
  Head.h - Library for servo control for humanoids.
  Created by Juan Carlos Garza Sanchez, August 8, 2015.
*/

#ifndef Head_h
#define Head_h

#include "Arduino.h"
#include "Servo.h"
#include "HumanoidObject.h"

#define MAX_SERVO_NUM 2

class Head: public HumanoidObject
{
	public:
		Head(int *pins);
		void move(int positionsNum, int positions[][MAX_SERVO_NUM], float movementSpeed, float milInTick, int Total_Ticks);
	private:
		Servo servos[MAX_SERVO_NUM];
		int *currentPositions;
		int *futurePositions;

};
#endif