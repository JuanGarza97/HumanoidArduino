/*
  Humanoid.h - Library for motor control.
  Created by Juan Carlos Garza Sánchez, August 8, 2015.
*/

#ifndef Humanoid_h
#define Humanoid_h

#include "Arduino.h"
#include "Servo.h"
#include "Head.h"
#include "Arm.h"

class Humanoid
{
  public:
	Humanoid(Head *&head);
	Humanoid(Arm *&arm);
	Humanoid(Head *&head, Arm *&arm);
	Humanoid(Arm *&rightArm, Arm *&leftArm);
    Humanoid(Head *&head, Arm *&rightArm, Arm *&leftArm);
	void attachServos();
    void clock(float t);
	void toDefault();
	bool move(int positions, int headPositions[][2]);
	bool move(int positions, int armPositions[][4]);
	bool move(int positions, int rightArmPositions[][4], int leftArmPositions[][4]);
	bool move(int positions, int headPositions[][2], int armPositions[][4]);
    bool move(int positions, int headPositions[][2], int rightArmPositions[][4], int leftArmPositions[][4]);
    void resetTime();
	void defaultPosition();
  private:
	Head *_head = NULL;
	Arm *_rightArm = NULL;
	Arm *_leftArm = NULL;
    float _movementSpeed;
    float currentTime;
    float startTime;
    int positionIndex;
    float milInTick;
};

#endif

