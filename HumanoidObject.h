/*
  HumanoidObject.h - Library for servo control for humanoids.
  Created by Juan Carlos Garza Sanchez, August 8, 2015.
*/

#ifndef HumanoidObject_h
#define HumanoidObject_h


#include "Arduino.h"
#include "Servo.h"

class HumanoidObject
{
	public:
		HumanoidObject(int *pins, Servo *servos, int* currentPositions, int = 2);
		void setDefaults(int *degrees);
		void goToDefault();
		void goToCurrent();
		void attachServos();
		void detachServos();
		void writeServos(int *degrees);
	private:
		int servosLength = 0;
		Servo *servos;
		int *_pins;
		int *defaultPositions;
		int *currentPositions;
		int *futurePositions;

};
#endif