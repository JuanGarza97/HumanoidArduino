/* Methods of the Humanoid Library
 * attachServos() attaches the servos of the humanoid
 * defaultPosition() moves the servos to their default position
 * clock(int) indicates desired time, in miliseconds, beween movements
 * move() moves the robot using the positions indicated in the arrays
 */
 
#include <Humanoid.h>
#include <Servo.h>

#define NUM_OF_MOVEMENTS 4
#define NUM_HEAD_SERVOS 2
#define NUM_ARM_SERVOS 4

int headPins[NUM_HEAD_SERVOS] = {2, 3}; //Pins for the head
int rightArmPins[NUM_ARM_SERVOS] = {4, 5, 6, 7}; //Pins for the right arm
int leftArmPins[NUM_ARM_SERVOS] = {8, 9, 10, 11}; //Pins for the left arm

Head *head = new Head(headPins); //Declares a new head
Arm *rightArm = new Arm(rightArmPins); //Declares a new arm
Arm *leftArm = new Arm(leftArmPins); //Declares a new arm
Humanoid h(head, rightArm, leftArm); //Declares a humanoid with a head and 2 arms

int headDefaults[NUM_HEAD_SERVOS] = {0, 0}; //Default positions for the servos of the head
int rightArmDefaults[NUM_ARM_SERVOS] = {90, 180, 180, 90}; //Default positions for the servos of the right arm
int leftArmDefaults[NUM_ARM_SERVOS] = {135, 90, 90, 180}; //Default positions for the servos of the left arm

int headPositions[][NUM_HEAD_SERVOS] = {{90, 90}, {0, 180}, {130, 90}, {90, 90}}; //Desired positions for the servos of the head
int rightArmPositions[][NUM_ARM_SERVOS] = {{0, 90, 90, 0}, {90, 0, 0, 90}, {130, 90, 90, 0}, {60, 0, 0, 90}}; //Desired positions for the servos of the right arm
int leftArmPositions[][NUM_ARM_SERVOS] = {{90, 0, 0, 90}, {0, 90, 0, 90}, {60, 0, 0, 90}, {20, 90, 0, 90}}; //Desired positions for the servos of the left arm

void setup()
{
  Serial.begin(9600); //set baud rate
  
  head->setDefaults(headDefaults); //Set the default positions for the head  
  rightArm->setDefaults(rightArmDefaults); //Set the default positions for the right arm
  leftArm->setDefaults(leftArmDefaults); //Set the default positions for the left arm
  
  h.attachServos(); //Attaches the servos
  h.defaultPosition(); //Moves the servos to their desired position

  delay(1000);
  
  h.clock(875); //The desired time between movements is set to 875ms
  h.move(NUM_OF_MOVEMENTS, headPositions, rightArmPositions, leftArmPositions); //Moves the robot

  delay(1000);
  
  h.clock(500); //The desired time between movements is set to 500ms
  h.move(NUM_OF_MOVEMENTS, headPositions, rightArmPositions, leftArmPositions); //Moves the robot
}

void loop()
{

}
    
