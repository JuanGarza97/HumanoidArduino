/*
  Humanoid.cpp - Library for motor control.
  Created by Juan Carlos Garza Sánchez, August 2, 2015.
*/

#include "Arduino.h"
#include "Humanoid.h"
#include "Servo.h"

Humanoid::Humanoid(Head *&head)
{
	startTime = 0;
	_head = head;
}

Humanoid::Humanoid(Arm *&arm)
{
	startTime = 0;
	_rightArm = arm;
}

Humanoid::Humanoid(Head *&head, Arm *&arm)
{
	startTime = 0;
	_head = head;
	_rightArm = arm;
}

Humanoid::Humanoid(Arm *&rightArm, Arm *&leftArm)
{
	startTime = 0;
	_rightArm = rightArm;
	_leftArm = leftArm;
}

Humanoid::Humanoid(Head *&head, Arm *&rightArm, Arm *&leftArm)
{
  startTime = 0;
  _head = head;
  _rightArm = rightArm;
  _leftArm = leftArm;
}

void Humanoid::clock(float movementSpeed)
{
  _movementSpeed = movementSpeed;
  currentTime = millis() - startTime;
  positionIndex = currentTime / (movementSpeed / 1000) / 1000;
 
  milInTick = (currentTime / movementSpeed - positionIndex) * movementSpeed;
  
}

void Humanoid::resetTime()
{
  startTime = millis();
  positionIndex = 0;
}

void Humanoid::attachServos()
{
	if(_head != NULL)
		_head->attachServos();
	if(_rightArm != NULL)
		_rightArm->attachServos();
	if(_leftArm != NULL)
		_leftArm->attachServos();
}

void Humanoid::defaultPosition()
{
	if(_head != NULL)
	_head->gotoDefault();
	if(_rightArm != NULL)
	_rightArm->gotoDefault();
	if(_leftArm != NULL)
	_leftArm->gotoDefault();
}


bool Humanoid::move(int positions, int headPositions[][2], int rightArmPositions[][4], int leftArmPositions[][4])
{
  if(_head == NULL || _rightArm == NULL || _leftArm	== NULL) return false;
  
  resetTime();
  while(positionIndex + 1< positions)
  {
    clock(_movementSpeed);
    _head->move(positions, headPositions, _movementSpeed, milInTick, positionIndex);
	_rightArm->move(positions, rightArmPositions, _movementSpeed, milInTick, positionIndex);
	_leftArm->move(positions, leftArmPositions, _movementSpeed, milInTick, positionIndex);
  }
  return true;
}

bool Humanoid::move(int positions, int headPositions[][2],int armPositions[][4])
{
	if(_head == NULL || _rightArm == NULL) return false;
	
	resetTime();
	while(positionIndex + 1< positions)
	{
		clock(_movementSpeed);
		_head->move(positions, headPositions, _movementSpeed, milInTick, positionIndex);
		_rightArm->move(positions, armPositions, _movementSpeed, milInTick, positionIndex);
	}
	return true;
}

bool Humanoid::move(int positions, int rightArmPositions[][4], int leftArmPositions[][4])
{
	if(_rightArm == NULL || _leftArm == NULL) return false;
	
	resetTime();
	while(positionIndex + 1< positions)
	{
		clock(_movementSpeed);
		_rightArm->move(positions, rightArmPositions, _movementSpeed, milInTick, positionIndex);
		_leftArm->move(positions, leftArmPositions, _movementSpeed, milInTick, positionIndex);
	}
	return true;
}

bool Humanoid::move(int positions, int headPositions[][2])
{
	if(_head == NULL) return false;
	
	resetTime();
	while(positionIndex + 1< positions)
	{
		clock(_movementSpeed);
		_head->move(positions, headPositions, _movementSpeed, milInTick, positionIndex);
	}
	return true;
}

bool Humanoid::move(int positions, int armPositions[][4])
{
	if(_rightArm == NULL) return false;
	
	resetTime();
	while(positionIndex + 1< positions)
	{
		clock(_movementSpeed);
		_rightArm->move(positions, armPositions, _movementSpeed, milInTick, positionIndex);
	}
	return true;
}