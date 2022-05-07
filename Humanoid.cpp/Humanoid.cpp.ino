/*
  Humanoid.h - Library for motor control.
  Created by Juan Carlos Garza Sánchez, August 2, 2015.
*/

#include "Arduino.h"
#include "Humanoid.h"
#include "Servo.h"

Humanoid::Humanoid()
{
  Restart = 0;
  m1 = 0;
  i = 1;
}

void Humanoid::Head(int pin1)
{
  _pin1 = pin1;
  head = 1;
}

void Humanoid::Head(int pin1, int pin2)
{
  _pin1 = pin1;
  _pin2 = pin2;
  head = 2;    
}

void Humanoid::Arm_R(int pin1, int pin2)
{
  _pin3 = pin1;
  _pin4 = pin2;
  arm_r = 2;
}

void Humanoid::Arm_R(int pin1, int pin2, int pin3)
{
  _pin3 = pin1;
  _pin4 = pin2;
  _pin5 = pin3;
  arm_r = 3;
}

void Humanoid::Arm_R(int pin1, int pin2, int pin3, int pin4)
{
  _pin3 = pin1;
  _pin4 = pin2;
  _pin5 = pin3;
  _pin6 = pin4;
  arm_r = 4;
}

void Humanoid::Arm_L(int pin1, int pin2)
{
  _pin7 = pin1;
  _pin8 = pin2;
  arm_l = 2;
}

void Humanoid::Arm_L(int pin1, int pin2, int pin3)
{
  _pin7 = pin1;
  _pin8 = pin2;
  _pin9 = pin3;
  arm_l = 3;
}


void Humanoid::Arm_L(int pin1, int pin2, int pin3, int pin4)
{
  _pin7 = pin1;
  _pin8 = pin2;
  _pin9 = pin3;
  _pin10 = pin4;
  arm_l = 4;
}

void Humanoid::Hand_R(int pin1)
{
  _pin11 = pin1;
  hand_r = 1;
}

void Humanoid::Hand_R(int pin1, int pin2)
{
  _pin11 = pin1;
  _pin12 = pin2;
  hand_r = 2;
}

void Humanoid::Hand_R(int pin1, int pin2, int pin3, int pin4, int pin5)
{
  _pin11 = pin1;
  _pin12 = pin2;
  _pin13 = pin3;
  _pin14 = pin4;
  _pin15 = pin5;
  hand_r = 5;
}

void Humanoid::Hand_L(int pin1)
{
  _pin16 = pin1;
  hand_l = 1;
}

void Humanoid::Hand_L(int pin1, int pin2)
{
  _pin16 = pin1;
  _pin17 = pin2;
  hand_l = 2;
}

void Humanoid::Hand_L(int pin1, int pin2, int pin3, int pin4, int pin5)
{
  _pin16 = pin1;
  _pin17 = pin2;
  _pin18 = pin3;
  _pin19 = pin4;
  _pin20 = pin5;
  hand_l = 5;
}

void Humanoid::Leg_R(int pin1, int pin2, int pin3)
{
  _pin21 = pin1;
  _pin22 = pin2;
  _pin23 = pin3;
  leg_r = 3;
}

void Humanoid::Leg_L(int pin1, int pin2, int pin3)
{
  _pin24 = pin1;
  _pin25 = pin2;
  _pin26 = pin3;
  leg_l = 3;
}

void Humanoid::Default_Head(int degree1)
{
  D1 = degree1;
  pos1 = D1;
}

void Humanoid::Default_Head(int degree1, int degree2)
{
  D1 = degree1;
  D2 = degree2;
  pos1 = D1;
  pos2 = D2;
}

void Humanoid::Default_Arm_R(int degree1, int degree2)
{
  D3 = degree1;
  D4 = degree2;
  pos3 = D3;
  pos4 = D4;
}

void Humanoid::Default_Arm_R(int degree1, int degree2, int degree3)
{
  D3 = degree1;
  D4 = degree2;
  D5 = degree3;
  pos3 = D3;
  pos4 = D4;
  pos5 = D5;
}


void Humanoid::Default_Arm_R(int degree1, int degree2, int degree3, int degree4)
{
  D3 = degree1;
  D4 = degree2;
  D5 = degree3;
  D6 = degree4;
  pos3 = D3;
  pos4 = D4;
  pos5 = D5;
  pos6 = D6;
}

void Humanoid::Default_Arm_L(int degree1, int degree2)
{
  D7 = degree1;
  D8 = degree2;
  pos7 = D7;
  pos8 = D8;
}

void Humanoid::Default_Arm_L(int degree1, int degree2, int degree3)
{
  D7 = degree1;
  D8 = degree2;
  D9 = degree3;
  pos7 = D7;
  pos8 = D8;
  pos9 = D9;
}

void Humanoid::Default_Arm_L(int degree1, int degree2, int degree3, int degree4)
{
  D7 = degree1;
  D8 = degree2;
  D9 = degree3;
  D10 = degree4;
  pos7 = D7;
  pos8 = D8;
  pos9 = D9;
  pos10 = D10;
}

void Humanoid::Default_Hand_R(int degree1)
{
  D11 = degree1;
  pos11 = D11;
}

void Humanoid::Default_Hand_R(int degree1, int degree2)
{
  D11 = degree1;
  D12 = degree2;
  pos11 = D11;
  pos12 = D12;
}

void Humanoid::Default_Hand_R(int degree1, int degree2, int degree3, int degree4, int degree5)
{
  D11 = degree1;
  D12 = degree2;
  D13 = degree3;
  D14 = degree4;
  D15 = degree5;
  pos11 = D11;
  pos12 = D12;
  pos13 = D13;
  pos14 = D14;
  pos15 = D15;
}

void Humanoid::Default_Hand_L(int degree1)
{
  D16 = degree1;
  pos16 = D16;
}

void Humanoid::Default_Hand_L(int degree1, int degree2)
{
  D16 = degree1;
  D17 = degree2;
  pos16 = D16;
  pos17 = D17;
}


void Humanoid::Default_Hand_L(int degree1, int degree2, int degree3, int degree4, int degree5)
{
  D16 = degree1;
  D17 = degree2;
  D18 = degree3;
  D19 = degree4;
  D20 = degree5;
  pos16 = D16;
  pos17 = D17;
  pos18 = D18;
  pos19 = D19;
  pos20 = D20;
}

void Humanoid::Clock(float t)
{
  _t = t;
  Time = millis() - Restart;
  Ticks = Time / (t / 1000);
  Total_Ticks = Ticks / 1000;
  Future_Total_Ticks = Total_Ticks + 1;
  
  mil = Time / t;
  m = mil - Total_Ticks;
  milInTick = m * t;
}

void Humanoid::ResetTime()
{
  Restart = millis();
}

void Humanoid::Walking()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
    int S[6][10]
    {
      {pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10},
      {D1,D2,D3 + 45,D4,D5,D6 + 20,D7 - 45,D8,D9,D10 - 20},
      {pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10},
      {D1,D2,D3 - 45,D4,D5,D6 + 20,D7 + 45,D8,D9,D10 - 20},
      {pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10},
      {0,0,0,0,0,0,0,0,0,0}
    };
  
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];
    int Actual3 = S[Total_Ticks][2];
    int Future3 = S[Future_Total_Ticks][2];
    int Actual4 = S[Total_Ticks][3];
    int Future4 = S[Future_Total_Ticks][3];
    int Actual5 = S[Total_Ticks][4];
    int Future5 = S[Future_Total_Ticks][4];
    int Actual6 = S[Total_Ticks][5];
    int Future6 = S[Future_Total_Ticks][5];
    int Actual7 = S[Total_Ticks][6];
    int Future7 = S[Future_Total_Ticks][6];
    int Actual8 = S[Total_Ticks][7];
    int Future8 = S[Future_Total_Ticks][7];
    int Actual9 = S[Total_Ticks][8];
    int Future9 = S[Future_Total_Ticks][8];
    int Actual10 = S[Total_Ticks][9];
    int Future10 = S[Future_Total_Ticks][9];

       if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == Future5 && Future5 == Future6 && Future6 == Future7 && Future7 == Future8 && Future8 == Future9 && Future9 == Future10 && Future10 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10); 
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Hello()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  s1.attach(_pin3);
  s2.attach(_pin4);
  s3.attach(_pin5);
  s4.attach(_pin6);
  while(true)
  {
    Clock(_t);
      int S[8][4] 
      {
        {D3,D4,D5,D6},
        {D3 - 90,D4 + 90 ,D5,D6 + 90},
        {D3 - 90,D4 + 90,D5,D6 + 100},
        {D3 - 90,D4 + 90,D5,D6 + 80},
        {D3 - 90,D4 + 90,D5,D6 + 100},
        {D3 - 90,D4 + 90,D5,D6 + 80},
        {D3,D4,D5,D6},
        {0,0,0,0}  
      };
    
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];
    int Actual3 = S[Total_Ticks][2];
    int Future3 = S[Future_Total_Ticks][2];
    int Actual4 = S[Total_Ticks][3];
    int Future4 = S[Future_Total_Ticks][3];

     if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == 0)
    {
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6; 
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        pos3 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos3 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos4 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos4 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    
      if(Actual3 > Future3)
      {
        pos5 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
      }
      else
      {
        pos5 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
      }
    
       if(Actual4 > Future4)
      {
        pos6 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
      }
      else
      {
        pos6 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
      }
    }
    
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos3);
      s2.write(pos4);
      s3.write(pos5);
      s4.write(pos6);
    }
    else 
    {
      s1.write(D3);
      s2.write(D4);
      s3.write(D5);
      s4.write(D6);
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Punch(String s, String mov)
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;

  s1.attach(_pin3);
  s2.attach(_pin4);
  s3.attach(_pin5);
  s4.attach(_pin6);
  s5.attach(_pin7);
  s6.attach(_pin8);
  s7.attach(_pin9);
  s8.attach(_pin10);
  while(true)
  {
    Clock(_t);
    int Arm_R1[4][4]
        {
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 90, D4, D5, D6},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {0,0,0,0}
        };
    
        int Arm_L1[3][4]
        {
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90}
        };

         int Arm_R2[5][4]
        {
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 + 45, D4, D5, D6 + 90},
          {D3 - 45, D4, D5, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {0,0,0,0}
        };
    
        int Arm_L2[4][4]
        {
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90}
        };
        int Arm_R3[4][4]
        {
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {0,0,0,0}
        };
        
        int Arm_L3[3][4]
        {
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 90, D8, D9, D10},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90}
        };
        int Arm_R4[5][4]
        {
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {0,0,0,0}
        };
    
        int Arm_L4[4][4]
        {
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 - 45, D8, D9, D10 - 90},
          {D7 + 90, D8, D9, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90}
        };
        int Arm_R5[5][4]
        {
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 90, D4, D5, D6},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {0,0,0,0}
        };
        
        int Arm_L5[4][4]
        {
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 + 45, D8, D9, D10},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90}
        };
        int Arm_R6[5][4]
        {
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {D3 + 45, D4, D5, D6 + 90},
          {D3 - 90, D4, D5, D6 + 90},
          {D3 - 45, D4 + 20, D5 + 35, D6 + 90},
          {0,0,0,0}
        };
    
        int Arm_L6[4][4]
        {
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90},
          {D7 - 45, D8, D9, D10 - 90},
          {D7 + 90, D8, D9, D10 - 90},
          {D7 + 45, D8 - 20, D9 - 35, D10 - 90}
        };
        int Actual1;
        int Future1;
        int Actual2;
        int Future2;
        int Actual3;
        int Future3;
        int Actual4;
        int Future4;
        int Actual5;
        int Future5;
        int Actual6;
        int Future6;
        int Actual7;
        int Future7;
        int Actual8;
        int Future8;
        int Actual9;
        int Future9;
        int Actual10;
        int Future10;
    if(s.equals("right"))
    {
      if(mov.equals("punch"))
      {
         Actual1 = Arm_R1[Total_Ticks][0];
         Future1 = Arm_R1[Future_Total_Ticks][0];
         Actual2 = Arm_R1[Total_Ticks][1];
         Future2 = Arm_R1[Future_Total_Ticks][1];
         Actual3 = Arm_R1[Total_Ticks][2];
         Future3 = Arm_R1[Future_Total_Ticks][2];
         Actual4 = Arm_R1[Total_Ticks][3];
         Future4 = Arm_R1[Future_Total_Ticks][3];
         Actual5 = Arm_L1[Total_Ticks][0];
         Future5 = Arm_L1[Future_Total_Ticks][0];
         Actual6 = Arm_L1[Total_Ticks][1];
         Future6 = Arm_L1[Future_Total_Ticks][1];
         Actual7 = Arm_L1[Total_Ticks][2];
         Future7 = Arm_L1[Future_Total_Ticks][2];
         Actual8 = Arm_L1[Total_Ticks][3];
         Future8 = Arm_L1[Future_Total_Ticks][3];
      }
      else if(mov.equals("upper jaw"))
      {
          Actual1 = Arm_R2[Total_Ticks][0];
          Future1 = Arm_R2[Future_Total_Ticks][0];
          Actual2 = Arm_R2[Total_Ticks][1];
          Future2 = Arm_R2[Future_Total_Ticks][1];
          Actual3 = Arm_R2[Total_Ticks][2];
          Future3 = Arm_R2[Future_Total_Ticks][2];
          Actual4 = Arm_R2[Total_Ticks][3];
          Future4 = Arm_R2[Future_Total_Ticks][3];
          Actual5 = Arm_L2[Total_Ticks][0];
          Future5 = Arm_L2[Future_Total_Ticks][0];
          Actual6 = Arm_L2[Total_Ticks][1];
          Future6 = Arm_L2[Future_Total_Ticks][1];
          Actual7 = Arm_L2[Total_Ticks][2];
          Future7 = Arm_L2[Future_Total_Ticks][2];
          Actual8 = Arm_L2[Total_Ticks][3];
          Future8 = Arm_L2[Future_Total_Ticks][3];
      }
    }
    else if(s.equals("left"))
    {
      if(mov.equals("punch"))
      {
          Actual1 = Arm_R3[Total_Ticks][0];
          Future1 = Arm_R3[Future_Total_Ticks][0];
          Actual2 = Arm_R3[Total_Ticks][1];
          Future2 = Arm_R3[Future_Total_Ticks][1];
          Actual3 = Arm_R3[Total_Ticks][2];
          Future3 = Arm_R3[Future_Total_Ticks][2];
          Actual4 = Arm_R3[Total_Ticks][3];
          Future4 = Arm_R3[Future_Total_Ticks][3];
          Actual5 = Arm_L3[Total_Ticks][0];
          Future5 = Arm_L3[Future_Total_Ticks][0];
          Actual6 = Arm_L3[Total_Ticks][1];
          Future6 = Arm_L3[Future_Total_Ticks][1];
          Actual7 = Arm_L3[Total_Ticks][2];
          Future7 = Arm_L3[Future_Total_Ticks][2];
          Actual8 = Arm_L3[Total_Ticks][3];
          Future8 = Arm_L3[Future_Total_Ticks][3];
      }
       else if(mov.equals("upper jaw"))
      {
          Actual1 = Arm_R4[Total_Ticks][0];
          Future1 = Arm_R4[Future_Total_Ticks][0];
          Actual2 = Arm_R4[Total_Ticks][1];
          Future2 = Arm_R4[Future_Total_Ticks][1];
          Actual3 = Arm_R4[Total_Ticks][2];
          Future3 = Arm_R4[Future_Total_Ticks][2];
          Actual4 = Arm_R4[Total_Ticks][3];
          Future4 = Arm_R4[Future_Total_Ticks][3];
          Actual5 = Arm_L4[Total_Ticks][0];
          Future5 = Arm_L4[Future_Total_Ticks][0];
          Actual6 = Arm_L4[Total_Ticks][1];
          Future6 = Arm_L4[Future_Total_Ticks][1];
          Actual7 = Arm_L4[Total_Ticks][2];
          Future7 = Arm_L4[Future_Total_Ticks][2];
          Actual8 = Arm_L4[Total_Ticks][3];
          Future8 = Arm_L4[Future_Total_Ticks][3];   
      }
    }
    else if(s.equals("both"))
    {
      if(mov.equals("punch"))
      {
          Actual1 = Arm_R5[Total_Ticks][0];
          Future1 = Arm_R5[Future_Total_Ticks][0];
          Actual2 = Arm_R5[Total_Ticks][1];
          Future2 = Arm_R5[Future_Total_Ticks][1];
          Actual3 = Arm_R5[Total_Ticks][2];
          Future3 = Arm_R5[Future_Total_Ticks][2];
          Actual4 = Arm_R5[Total_Ticks][3];
          Future4 = Arm_R5[Future_Total_Ticks][3];
          Actual5 = Arm_L5[Total_Ticks][0];
          Future5 = Arm_L5[Future_Total_Ticks][0];
          Actual6 = Arm_L5[Total_Ticks][1];
          Future6 = Arm_L5[Future_Total_Ticks][1];
          Actual7 = Arm_L5[Total_Ticks][2];
          Future7 = Arm_L5[Future_Total_Ticks][2];
          Actual8 = Arm_L5[Total_Ticks][3];
          Future8 = Arm_L5[Future_Total_Ticks][3]; 
      }
       else if(mov.equals("upper jaw"))
      {
          Actual1 = Arm_R6[Total_Ticks][0];
          Future1 = Arm_R6[Future_Total_Ticks][0];
          Actual2 = Arm_R6[Total_Ticks][1];
          Future2 = Arm_R6[Future_Total_Ticks][1];
          Actual3 = Arm_R6[Total_Ticks][2];
          Future3 = Arm_R6[Future_Total_Ticks][2];
          Actual4 = Arm_R6[Total_Ticks][3];
          Future4 = Arm_R6[Future_Total_Ticks][3];
          Actual5 = Arm_L6[Total_Ticks][0];
          Future5 = Arm_L6[Future_Total_Ticks][0];
          Actual6 = Arm_L6[Total_Ticks][1];
          Future6 = Arm_L6[Future_Total_Ticks][1];
          Actual7 = Arm_L6[Total_Ticks][2];
          Future7 = Arm_L6[Future_Total_Ticks][2];
          Actual8 = Arm_L6[Total_Ticks][3];
          Future8 = Arm_L6[Future_Total_Ticks][3];
      }
    }

    if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == 0)
    {
      s1.write(D3 - 45);
      s2.write(D4 + 20);
      s3.write(D5 + 35);
      s4.write(D6 + 90);
      s5.write(D7 + 45);
      s6.write(D8 - 20);
      s7.write(D9 - 35);
      s8.write(D10 - 90);
      pos3 = D3 - 45;
      pos4 = D4 + 20;
      pos5 = D5 + 35;
      pos6 = D6 + 90;
      pos7 = D7 + 45;
      pos8 = D8 - 20;
      pos9 = D9 - 35;
      pos10 = D10 - 90;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      break;
    }
    if (Actual1 > Future1)
    {
      pos3 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos3 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos4 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos5 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos6 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos7 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos8 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos9 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }

    if(Actual8 > Future8)
    {
      pos10 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos3);
      s2.write(pos4);
      s3.write(pos5);
      s4.write(pos6);
      s5.write(pos7);
      s6.write(pos8);
      s7.write(pos9);
      s8.write(pos10);
    }
    else 
    {
      s1.write(D3 - 45);
      s2.write(D4 + 20);
      s3.write(D5 + 35);
      s4.write(D6 + 90);
      s5.write(D7 + 45);
      s6.write(D8 - 20);
      s7.write(D9 - 35);
      s8.write(D10 - 90);
      pos3 = D3 - 45;
      pos4 = D4 + 20;
      pos5 = D5 + 35;
      pos6 = D6 + 90;
      pos7 = D7 + 45;
      pos8 = D8 - 20;
      pos9 = D9 - 35;
      pos10 = D10 - 90;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Hello(int d)
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  s1.attach(_pin3);
  s2.attach(_pin4);
  s3.attach(_pin5);
  s4.attach(_pin6);
  i = 0;
  while(true)
  {
    int S[7][4]
    {
      {pos3,pos4,pos5,pos6},
      {D3,D4,D5,170},
      {D3,D4,D5 + 40,170},
      {D3,D4,D5 - 40,170},
      {D3,D4,D5,180},
      {D3,D4,D5,D6},
      {0,0,0,0}  
    };
    
    int Actual1 = S[i][0];
    int Future1 = S[i + 1][0];
    int Actual2 = S[i][1];
    int Future2 = S[i + 1][1];
    int Actual3 = S[i][2];
    int Future3 = S[i + 1][2];
    int Actual4 = S[i][3];
    int Future4 = S[i + 1][3];

     if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == 0)
    {
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6; 
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        i++;
        pos3 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos3 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos4 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos4 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    
      if(Actual3 > Future3)
      {
        pos5 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
      }
      else
      {
        pos5 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
      }
    
       if(Actual4 > Future4)
      {
        pos6 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
      }
      else
      {
        pos6 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
      }
    }
    
    if (i <= 6 )
    {
      s1.write(pos3);
      s2.write(pos4);
      s3.write(pos5);
      s4.write(pos6);
    }
    else 
    {
      s1.write(D3);
      s2.write(D4);
      s3.write(D5);
      s4.write(D6);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
    delay(d);
  }
  i = 0;
}

void Humanoid::Greet()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  s1.attach(_pin3);
  s2.attach(_pin4);
  s3.attach(_pin5);
  s4.attach(_pin6); 
  while(true)
  {
    Clock(_t);
    int S[7][4]
    {
      {D3,D4,D5,D6},
      {D3 - 90,D4,D5,D6},
      {D3 - 45,D4,D5,D6},
      {D3 - 90,D4,D5,D6},
      {D3 - 45,D4,D5,D6},
      {D3,D4,D5,D6}, 
      {0,0,0,0}
    };
  
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];
    int Actual3 = S[Total_Ticks][2];
    int Future3 = S[Future_Total_Ticks][2];
    int Actual4 = S[Total_Ticks][3];
    int Future4 = S[Future_Total_Ticks][3];

    if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == 0)
    {
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      s1.write(D3);
      s2.write(D4);
      s3.write(D5);
      s4.write(D6);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        pos3 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos3 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos4 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos4 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    
      if(Actual3 > Future3)
      {
        pos5 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
      }
      else
      {
        pos5 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
      }
    
       if(Actual4 > Future4)
      {
        pos6 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
      }
      else
      {
        pos6 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
      }
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos3);
      s2.write(pos4);
      s3.write(pos5);
      s4.write(pos6);
    }
    else 
    {
      s1.write(D3);
      s2.write(D4);
      s3.write(D5);
      s4.write(D6);
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Greet(int d)
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  s1.attach(_pin3);
  s2.attach(_pin4);
  s3.attach(_pin5);
  s4.attach(_pin6); 
  while(true)
  {
    int S[7][4]
    {
      {D3,D4,D5,D6},
      {D3 - 90,D4,D5,D6},
      {D3 - 45,D4,D5,D6},
      {D3 - 90,D4,D5,D6},
      {D3 - 45,D4,D5,D6},
      {D3,D4,D5,D6}, 
      {0,0,0,0}
    };
  
    int Actual1 = S[i][0];
    int Future1 = S[i + 1][0];
    int Actual2 = S[i][1];
    int Future2 = S[i + 1][1];
    int Actual3 = S[i][2];
    int Future3 = S[i + 1][2];
    int Actual4 = S[i][3];
    int Future4 = S[i + 1][3];

    if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == 0)
    {
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        i++;
        pos3 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos3 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos4 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos4 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    
      if(Actual3 > Future3)
      {
        pos5 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
      }
      else
      {
        pos5 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
      }
    
       if(Actual4 > Future4)
      {
        pos6 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
      }
      else
      {
        pos6 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
      }
    }
   
    if (i <= 6)
    {
      s1.write(pos3);
      s2.write(pos4);
      s3.write(pos5);
      s4.write(pos6);
    }
    else 
    {
      s1.write(D3);
      s2.write(D4);
      s3.write(D5);
      s4.write(D6);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      break;
    }
    delay(d);
  }
  i = 0;
}

void Humanoid::Yes()
{
  Servo s1;
  Servo s2;
  s1.attach(_pin1);
  s2.attach(_pin2);
  
  while(true)
  {
    Clock(_t);
    int S[7][2]
    {
      {D1,D2},
      {D1,100},
      {D1,70},
      {D1,100},
      {D1,70},
      {D1,D2}, 
      {0,0}
    };
    Serial.println(Total_Ticks);
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];

    if(Future1 == Future2 && Future2 == 0)
    {
      pos1 = D1;
      pos2 = D2;
      s1.write(D1);
      s2.write(D2);
      s1.detach();
      s2.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      pos1 = D1;
      pos2 = D2;
      s1.detach();
      s2.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Yes(int d)
{
  Servo s1;
  Servo s2;
  s1.attach(_pin1);
  s2.attach(_pin2);
  
  while(true)
  {
    int S[7][2]
    {
      {D1,D2},
      {D1,100},
      {D1,70},
      {D1,100},
      {D1,70},
      {D1,D2}, 
      {0,0}
    };
    
    int Actual1 = S[i][0];
    int Future1 = S[i + 1][0];
    int Actual2 = S[i][1];
    int Future2 = S[i + 1][1];

    if(Future1 == Future2 && Future2 == 0)
    {
      pos1 = D1;
      pos2 = D2;
      s1.write(D1);
      s2.write(D2);
      s1.detach();
      s2.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        i++;
        pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    }
   
    if (i <= 6)
    {
      s1.write(pos1);
      s2.write(pos2);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s1.detach();
      s2.detach();
      break;
    }
    delay(d);
  }
  i = 0;
}

void Humanoid::No()
{
  Servo s1;
  Servo s2;
  s1.attach(_pin1);
  s2.attach(_pin2);
  while(true)
  {
    Clock(_t);
    int S[7][2]
    {
      {D1,D2},
      {110,D2},
      {70,D2},
      {110,D2},
      {70,D2},
      {D1,D2},
      {0,0} 
    };
    
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];

    if(Future1 == Future2 && Future2 == 0)
    {
      pos1 = D1;
      pos2 = D2;
      s1.write(D1);
      s2.write(D2);
      s1.detach();
      s2.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      { 
        pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      {
        pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      pos1 = D1;
      pos2 = D2;
      s1.detach();
      s2.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::No(int d)
{
  Servo s1;
  Servo s2;
  s1.attach(_pin1);
  s2.attach(_pin2);
  while(true)
  {
    Serial.println(i);
    int S[7][2]
    {
      {D1,D2},
      {110,D2},
      {70,D2},
      {110,D2},
      {70,D2},
      {D1,D2},
      {0,0} 
    };
    
    int Actual1 = S[i][0];
    int Future1 = S[i + 1][0];
    int Actual2 = S[i][1];
    int Future2 = S[i + 1][1];

    if(Future1 == Future2 && Future2 == 0)
    {
      pos1 = D1;
      pos2 = D2;
      s1.detach();
      s2.detach();
      break;
    }
    else
    {
      if (Actual1 > Future1)
      {
        pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
      }
      else 
      {
        pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
      }
    
      if(Actual2 > Future2)
      { 
        pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
      }
      else
      {
        pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
      }
    }
   
    if (i <= 6)
    {
      s1.write(pos1);
      s2.write(pos2);
      i++;
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s1.detach();
      s2.detach();
      break;
    }
    delay(d);
  }
  i = 0;
}

void Humanoid::ThisShitIsBananas()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
    int Head[35][2]
    {
      {D1,D2},
      {D1,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1 - 20,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1 - 20,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1 - 20,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1 - 20,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1 - 20,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1 - 20,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1 - 20,D2 + 20},
      {D1 + 20,D2 + 20},
      {D1,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1 - 20,D2 - 20},
      {D1 + 20,D2 - 20},
      {D1,D2},
      {0,0}
    };

    int Arm_R[35][4]
    {
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6},
      {D3 + 20,D4,D5,D6},
      {D3,D4,D5,D6}
    };

    int Arm_L[35][4]
    {
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 20,D8,D9,D10},
      {D7,D8,D9,D10}
    };
  
    int Actual1 = Head[Total_Ticks][0];
    int Future1 = Head[Future_Total_Ticks][0];
    int Actual2 = Head[Total_Ticks][1];
    int Future2 = Head[Future_Total_Ticks][1];
    int Actual3 = Arm_R[Total_Ticks][0];
    int Future3 = Arm_R[Future_Total_Ticks][0];
    int Actual4 = Arm_R[Total_Ticks][1];
    int Future4 = Arm_R[Future_Total_Ticks][1];
    int Actual5 = Arm_R[Total_Ticks][2];
    int Future5 = Arm_R[Future_Total_Ticks][2];
    int Actual6 = Arm_R[Total_Ticks][3];
    int Future6 = Arm_R[Future_Total_Ticks][3];
    int Actual7 = Arm_L[Total_Ticks][0];
    int Future7 = Arm_L[Future_Total_Ticks][0];
    int Actual8 = Arm_L[Total_Ticks][1];
    int Future8 = Arm_L[Future_Total_Ticks][1];
    int Actual9 = Arm_L[Total_Ticks][2];
    int Future9 = Arm_L[Future_Total_Ticks][2];
    int Actual10 = Arm_L[Total_Ticks][3];
    int Future10 = Arm_L[Future_Total_Ticks][3];

    if(Future1 == Future2 && Future2 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Macarena()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
    int Head[18][2]
    {
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {0,0}
    };

    int Arm_R[17][4]
    {
      {D3,D4,D5,D6},
      {D3 - 90,D4,D5 + 90,D6},
      {D3 - 90,D4,D5 + 90,D6},
      {D3 - 90,D4,D5 - 90,D6},
      {D3 - 90,D4,D5 - 90,D6},
      {D3 - 90,D4,D5 + 45,D6 + 90},
      {D3 - 90,D4,D5 + 45,D6 + 90},
      {D3 - 90,D4,D5 ,D6 + 270},
      {D3 - 90,D4,D5 ,D6 + 270},
      {D3 - 20,D4,D5 + 90,D6 + 45},
      {D3 - 20,D4,D5 + 90,D6 + 45},  
      {D3 - 20,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 20,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 20,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 20,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 20,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 20,D4 + 45,D5 + 90,D6 + 270}
    };

    int Arm_L[17][4]
    {
      {D7,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 90,D8,D9 - 90,D10},
      {D7 + 90,D8,D9 - 90,D10},
      {D7 + 90,D8,D9 + 90,D10},
      {D7 + 90,D8,D9 + 90,D10}, 
      {D7 + 90,D8,D9 - 45,D10 - 90},
      {D7 + 90,D8,D9 - 45,D10 - 90},
      {D7 + 90,D8,D9 ,D10 - 270},
      {D7 + 90,D8,D9 ,D10 - 270},
      {D7 + 20,D8,D9 - 90,D10 - 45},
      {D7 + 20,D8,D9 - 90,D10 - 45},
      {D7 + 20,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 20,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 20,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 20,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 20,D8 - 45,D9 - 90,D10 - 270}
    };
  
    int Actual1 = Head[Total_Ticks][0];
    int Future1 = Head[Future_Total_Ticks][0];
    int Actual2 = Head[Total_Ticks][1];
    int Future2 = Head[Future_Total_Ticks][1];
    int Actual3 = Arm_R[Total_Ticks][0];
    int Future3 = Arm_R[Future_Total_Ticks][0];
    int Actual4 = Arm_R[Total_Ticks][1];
    int Future4 = Arm_R[Future_Total_Ticks][1];
    int Actual5 = Arm_R[Total_Ticks][2];
    int Future5 = Arm_R[Future_Total_Ticks][2];
    int Actual6 = Arm_R[Total_Ticks][3];
    int Future6 = Arm_R[Future_Total_Ticks][3];
    int Actual7 = Arm_L[Total_Ticks][0];
    int Future7 = Arm_L[Future_Total_Ticks][0];
    int Actual8 = Arm_L[Total_Ticks][1];
    int Future8 = Arm_L[Future_Total_Ticks][1];
    int Actual9 = Arm_L[Total_Ticks][2];
    int Future9 = Arm_L[Future_Total_Ticks][2];
    int Actual10 = Arm_L[Total_Ticks][3];
    int Future10 = Arm_L[Future_Total_Ticks][3];

    if(Future1 == Future2 && Future2 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Macarena(int d)
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    int Head[18][2]
    {
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {D1,D2},
      {0,0}
    };

    int Arm_R[17][4]
    {
      {D3,D4,D5,D6},
      {D3 - 90,D4,D5 + 90,D6},
      {D3 - 90,D4,D5 + 90,D6},
      {D3 - 90,D4,D5 - 90,D6},
      {D3 - 90,D4,D5 - 90,D6},
      {D3 - 90,D4,D5 + 45,D6 + 90},
      {D3 - 90,D4,D5 + 45,D6 + 90},
      {D3 - 90,D4,D5 ,D6 + 270},
      {D3 - 90,D4,D5 ,D6 + 270},
      {D3 - 20,D4,D5 + 90,D6 + 45},
      {D3 - 20,D4,D5 + 90,D6 + 45},  
      {D3 - 10,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 10,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 10,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 10,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 10,D4 + 45,D5 + 90,D6 + 270},
      {D3 - 10,D4 + 45,D5 + 90,D6 + 270}
    };

    int Arm_L[17][4]
    {
      {D7,D8,D9,D10},
      {D7,D8,D9,D10},
      {D7 + 90,D8,D9 - 90,D10},
      {D7 + 90,D8,D9 - 90,D10},
      {D7 + 90,D8,D9 + 90,D10},
      {D7 + 90,D8,D9 + 90,D10}, 
      {D7 + 90,D8,D9 - 45,D10 - 90},
      {D7 + 90,D8,D9 - 45,D10 - 90},
      {D7 + 90,D8,D9 ,D10 - 270},
      {D7 + 90,D8,D9 ,D10 - 270},
      {D7 + 20,D8,D9 - 90,D10 - 45},
      {D7 + 20,D8,D9 - 90,D10 - 45},
      {D7 + 10,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 10,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 10,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 10,D8 - 45,D9 - 90,D10 - 270},
      {D7 + 10,D8 - 45,D9 - 90,D10 - 270}
    };
  
    int Actual1 = Head[i][0];
    int Future1 = Head[i + 1][0];
    int Actual2 = Head[i][1];
    int Future2 = Head[i + 1][1];
    int Actual3 = Arm_R[i][0];
    int Future3 = Arm_R[i + 1][0];
    int Actual4 = Arm_R[i][1];
    int Future4 = Arm_R[i + 1][1];
    int Actual5 = Arm_R[i][2];
    int Future5 = Arm_R[i + 1][2];
    int Actual6 = Arm_R[i][3];
    int Future6 = Arm_R[i + 1][3];
    int Actual7 = Arm_L[i][0];
    int Future7 = Arm_L[i + 1][0];
    int Actual8 = Arm_L[i][1];
    int Future8 = Arm_L[i + 1][1];
    int Actual9 = Arm_L[i][2];
    int Future9 = Arm_L[i + 1][2];
    int Actual10 = Arm_L[i][3];
    int Future10 = Arm_L[i + 1][3];

    if(Future1 == Future2 && Future2 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (i <= 16)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    if(Actual1 == pos1)
    {
      i++;
    }
    delay(d);
  }
  i = 0;
}

void Humanoid::Head(int S[][2])
{
  for(int a = 0; a < (sizeof(S)/sizeof(int)); a++)
  {
    for(int j = 0; j < 2; j++)
    {
      _Head[a][j] = S[a][j];
    }
  }
}

void Humanoid::Arm_R(int S[][4])
{
  for(int a = 0; a < (sizeof(S)/sizeof(int)); a++)
  {
    for(int j = 0; j < 4; j++)
    {
      _Arm_R[a][j] = S[a][j];
    }
  }
}

void Humanoid::Arm_L(int S[][4])
{
  for(int a = 0; a < (sizeof(S)/sizeof(int)); a++)
  {
    for(int j = 0; j < 4; j++)
    {
      _Arm_L[a][j] = S[a][j];
    }
  }
}

void Humanoid::Move()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);

  int Head[55][2]
{
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {110,90},
  {90,90},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,120},
  {90,90},
  {90,60},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90}
};

int Arm_R[55][4]
{
  {155,70,90,0},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {60,110,60,90},
  {60,110,120,40},
  {155,70,90,0},
  {155,160,120,100},
  {155,70,90,100},
  {155,70,90,100},
  {155,70,90,100},
  {155,160,120,100},
  {155,70,90,100},
  {155,70,90,100},
  {155,70,90,100},
  {155,160,120,100},
  {155,70,90,100},
  {155,70,90,100},
  {155,160,90,100},
  {155,70,120,100},
  {155,70,90,100},
  {155,70,90,100},
  {155,160,90,100},
  {155,70,90,0},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {155,160,90,100},
  {125,70,120,100},
  {125,70,120,100},
  {125,70,120,100},
  {125,70,120,100},
  {125,70,120,100}
};

int Arm_L[55][4]
{
  {30,115,80,180},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {120,75,50,90},
  {120,75,110,140},
  {30,115,80,180},
  {30,160,80,80},
  {30,70,80,80},
  {30,70,110,80},
  {30,70,80,80},
  {30,160,80,80},
  {30,70,80,80},
  {30,70,110,80},
  {30,70,80,80},
  {30,160,80,80},
  {30,70,80,80},
  {30,70,110,80},
  {30,70,80,80},
  {30,160,80,80},
  {30,70,80,80},
  {30,70,110,80},
  {30,70,80,80},
  {30,115,80,80},
  {30,160,80,80},
  {30,70,110,80},
  {30,70,80,80},
  {30,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80},
  {100,160,80,80},
  {100,70,110,80}
};

  while(true)
  {
    Clock(_t);
  
    int Actual1 = Head[Total_Ticks][0];
    int Future1 = Head[Future_Total_Ticks][0];
    int Actual2 = Head[Total_Ticks][1];
    int Future2 = Head[Future_Total_Ticks][1];
    int Actual3 = Arm_R[Total_Ticks][0];
    int Future3 = Arm_R[Future_Total_Ticks][0];
    int Actual4 = Arm_R[Total_Ticks][1];
    int Future4 = Arm_R[Future_Total_Ticks][1];
    int Actual5 = Arm_R[Total_Ticks][2];
    int Future5 = Arm_R[Future_Total_Ticks][2];
    int Actual6 = Arm_R[Total_Ticks][3];
    int Future6 = Arm_R[Future_Total_Ticks][3];
    int Actual7 = Arm_L[Total_Ticks][0];
    int Future7 = Arm_L[Future_Total_Ticks][0];
    int Actual8 = Arm_L[Total_Ticks][1];
    int Future8 = Arm_L[Future_Total_Ticks][1];
    int Actual9 = Arm_L[Total_Ticks][2];
    int Future9 = Arm_L[Future_Total_Ticks][2];
    int Actual10 = Arm_L[Total_Ticks][3];
    int Future10 = Arm_L[Future_Total_Ticks][3];

    if(Future1 == Future2 && Future2 == 0)
    {
      break;
    }
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::LetItGo()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
     int Head[133][2]
{
  {90,50},
  {90,50},
  {90,50},
  {90,50},
  {90,50},
  {90,90},
  {90,90},
  {90,90},
  {60,70},
  {90,90},
  {120,70},
  {90,90},
  {60,70},
  {90,90},
  {120,70},
  {90,90},
  {60,100},
  {60,100},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,70},
  {90,90},
  {40,50},
  {40,50},
  {60,70},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {30,100},
  {90,90},
  {150,100},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {150,90},
  {90,90},
  {30,90},
  {90,90},
  {90,90},
  {90,90},
  {90,70},
  {90,90},
  {150,90},
  {90,90},
  {30,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {120,70},
  {120,70},
  {120,70},
  {120,70},
  {50,70},
  {50,70},
  {50,70},
  {50,70},
  {90,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {150,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {150,90},
  {90,90},
  {30,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {90,90},
  {0,0}
};

int Arm_R[132][4]
{
  {155,70,110,25},   
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {110,70,110,25},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,40,40},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {135,90,90,10},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {135,170,40,100},
  {155,70,110,0},
  {155,90,110,70},
  {170,70,10,0},
  {170,170,10,0},
  {170,170,10,70},
  {170,140,90,100},
  {170,110,90,0},
  {155,100,20,40},
  {155,70,90,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {155,70,110,0},
  {140,70,90,0},
  {140,70,90,0},
  {140,70,90,100},
  {140,70,90,100},
  {140,70,90,75},
  {140,70,90,50},
  {155,70,90,25},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {155,140,15,90},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {140,70,130,40},
  {155,160,15,30},
  {155,115,50,15},
  {155,70,90,0},
  {110,140,20,30},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {110,100,20,20},
  {155,140,20,30},
  {155,100,20,40},
  {155,70,90,0},
  {110,140,20,30},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {140,160,90,100},
  {140,160,90,50},
  {140,110,90,0},
  {155,70,90,0},
  {90,90,50,90},
  {155,160,50,90},
  {155,70,90,100},
  {155,160,50,90},
  {90,90,50,90},
  {120,70,50,90},
  {120,70,120,90},
  {155,70,120,0},
  {120,90,90,90},
  {155,160,150,0},
  {155,110,30,50},
  {155,70,50,100},
  {60,70,90,0},
  {90,70,90,0},
  {120,70,90,0},
  {155,70,90,0},
  {155,120,90,0},
  {155,120,120,0},
  {155,120,120,0},
  {155,70,120,0},
  {95,70,90,0},
  {40,70,90,0},
  {40,70,90,90},
  {155,70,90,0},
  {110,140,90,30},
  {155,70,20,0},
  {155,70,90,0},
  {155,70,90,0},
  {140,160,90,100},
  {140,160,90,50},
  {140,110,90,0},
  {155,70,90,0},
  {95,70,90,0},
  {40,70,90,0},
  {40,70,90,90},
  {155,70,90,0},
  {95,70,90,0},
  {40,70,90,0},
  {40,70,90,90},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {60,70,170,90},
  {10,70,170,0},
  {10,70,170,0},
  {10,70,170,0},
  {10,70,170,0},
  {10,70,170,0},
  {50,70,150,0},
  {90,70,130,0},
  {130,70,110,0},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0},
  {155,70,90,0}
};

int Arm_L[132][4]
{
  {30,115,60,180},
  {30,115,60,180},
  {75,115,60,155},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {75,115,60,155},
  {30,115,60,180},
  {30,115,130,140},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {50,95,80,170},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,40,100,180},
  {30,40,100,120},
  {50,70,80,90},
  {30,115,80,180},
  {30,115,60,180},
  {30,115,60,180},
  {50,25,150,60},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,145,150,140},
  {30,115,60,180},
  {60,90,80,80},
  {60,90,80,80},
  {60,100,70,120},
  {60,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {30,115,60,180},
  {45,115,80,60},
  {45,115,80,60},
  {45,115,80,60},
  {45,115,80,60},
  {45,115,80,120},
  {45,115,80,60},
  {45,115,80,120},
  {30,115,80,60},
  {30,50,80,90},
  {30,115,150,180},
  {30,115,80,180},
  {30,115,80,180},
  {45,115,80,90},
  {70,90,30,90},
  {70,90,80,90},
  {30,50,80,90},
  {45,115,150,140},
  {30,30,40,150},
  {30,70,150,120},
  {30,115,120,90},
  {30,115,80,90},
  {30,115,80,90},
  {70,40,80,150},
  {30,115,150,90},
  {30,115,80,90},
  {30,115,80,90},
  {30,145,80,140},
  {30,115,150,180},
  {30,115,60,90},
  {30,115,80,90},
  {70,40,80,150},
  {30,115,150,90},
  {45,20,80,60},
  {45,20,80,120},
  {45,70,80,180},
  {30,115,80,180},
  {90,90,80,90},
  {60,115,120,90},
  {60,115,50,90},
  {60,115,50,90},
  {90,90,50,90},
  {30,20,120,90},
  {30,115,120,80},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,30,80,180},
  {30,30,50,180},
  {30,30,50,180},
  {30,115,50,180},
  {85,115,80,180},
  {140,115,80,180},
  {140,115,80,90},
  {30,115,80,180},
  {30,115,80,90},
  {30,115,80,90},
  {70,40,80,150},
  {30,115,150,90},
  {45,20,80,60},
  {45,20,80,120},
  {45,70,80,180},
  {30,115,80,180},
  {85,115,80,180},
  {140,115,80,180},
  {140,115,80,90},
  {30,115,80,180},
  {85,115,80,180},
  {140,115,80,180},
  {140,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {120,115,0,180},
  {170,115,0,180},
  {170,115,0,180},
  {170,115,0,180},
  {170,115,0,180},
  {170,115,0,180},
  {130,115,20,180},
  {90,115,40,180},
  {50,115,60,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180},
  {30,115,80,180}
};
    int Actual1 = Head[Total_Ticks][0];
    int Future1 = Head[Future_Total_Ticks][0];
    int Actual2 = Head[Total_Ticks][1];
    int Future2 = Head[Future_Total_Ticks][1];
    int Actual3 = Arm_R[Total_Ticks][0];
    int Future3 = Arm_R[Future_Total_Ticks][0];
    int Actual4 = Arm_R[Total_Ticks][1];
    int Future4 = Arm_R[Future_Total_Ticks][1];
    int Actual5 = Arm_R[Total_Ticks][2];
    int Future5 = Arm_R[Future_Total_Ticks][2];
    int Actual6 = Arm_R[Total_Ticks][3];
    int Future6 = Arm_R[Future_Total_Ticks][3];
    int Actual7 = Arm_L[Total_Ticks][0];
    int Future7 = Arm_L[Future_Total_Ticks][0];
    int Actual8 = Arm_L[Total_Ticks][1];
    int Future8 = Arm_L[Future_Total_Ticks][1];
    int Actual9 = Arm_L[Total_Ticks][2];
    int Future9 = Arm_L[Future_Total_Ticks][2];
    int Actual10 = Arm_L[Total_Ticks][3];
    int Future10 = Arm_L[Future_Total_Ticks][3];

    if(Future1 == Future2 && Future2 == 0)
    {
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Move(int d)
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    
    int Actual1 = _Head[i][0];
    int Future1 = _Head[i + 1][0];
    int Actual2 = _Head[i][1];
    int Future2 = _Head[i + 1][1];
    int Actual3 = _Arm_R[i][0];
    int Future3 = _Arm_R[i + 1][0];
    int Actual4 = _Arm_R[i][1];
    int Future4 = _Arm_R[i + 1][1];
    int Actual5 = _Arm_R[i][2];
    int Future5 = _Arm_R[i + 1][2];
    int Actual6 = _Arm_R[i][3];
    int Future6 = _Arm_R[i + 1][3];
    int Actual7 = _Arm_L[i][0];
    int Future7 = _Arm_L[i + 1][0];
    int Actual8 = _Arm_L[i][1];
    int Future8 = _Arm_L[i + 1][1];
    int Actual9 = _Arm_L[i][2];
    int Future9 = _Arm_L[i + 1][2];
    int Actual10 = _Arm_L[i][3];
    int Future10 = _Arm_L[i + 1][3];

    if(Future1 == Future2 && Future2 == 0)
    {
      break;
    }
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
      i++;
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    delay(d);
  }
  i = 0;
}

void Humanoid::Relax()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
    int S[3][10]
    {
      {pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10},
      {D1,D2,D3,D4,D5,D6,D7,D8,D9,D10},
      {0,0,0,0,0,0,0,0,0,0}
    };
  
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];
    int Actual3 = S[Total_Ticks][2];
    int Future3 = S[Future_Total_Ticks][2];
    int Actual4 = S[Total_Ticks][3];
    int Future4 = S[Future_Total_Ticks][3];
    int Actual5 = S[Total_Ticks][4];
    int Future5 = S[Future_Total_Ticks][4];
    int Actual6 = S[Total_Ticks][5];
    int Future6 = S[Future_Total_Ticks][5];
    int Actual7 = S[Total_Ticks][6];
    int Future7 = S[Future_Total_Ticks][6];
    int Actual8 = S[Total_Ticks][7];
    int Future8 = S[Future_Total_Ticks][7];
    int Actual9 = S[Total_Ticks][8];
    int Future9 = S[Future_Total_Ticks][8];
    int Actual10 = S[Total_Ticks][9];
    int Future10 = S[Future_Total_Ticks][9];

    if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == Future5 && Future5 == Future6 && Future6 == Future7 && Future7 == Future8 && Future8 == Future9 && Future9 == Future10 && Future10 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10); 
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::TPose()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
    int S[3][10]
    {
      {pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10},
      {D1,D2,D3,D4 + 90,D5,D6,D7,D8 - 90,D9,D10},
      {0,0,0,0,0,0,0,0,0,0}
    };
  
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];
    int Actual3 = S[Total_Ticks][2];
    int Future3 = S[Future_Total_Ticks][2];
    int Actual4 = S[Total_Ticks][3];
    int Future4 = S[Future_Total_Ticks][3];
    int Actual5 = S[Total_Ticks][4];
    int Future5 = S[Future_Total_Ticks][4];
    int Actual6 = S[Total_Ticks][5];
    int Future6 = S[Future_Total_Ticks][5];
    int Actual7 = S[Total_Ticks][6];
    int Future7 = S[Future_Total_Ticks][6];
    int Actual8 = S[Total_Ticks][7];
    int Future8 = S[Future_Total_Ticks][7];
    int Actual9 = S[Total_Ticks][8];
    int Future9 = S[Future_Total_Ticks][8];
    int Actual10 = S[Total_Ticks][9];
    int Future10 = S[Future_Total_Ticks][9];

       if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == Future5 && Future5 == Future6 && Future6 == Future7 && Future7 == Future8 && Future8 == Future9 && Future9 == Future10 && Future10 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4 + 90);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8 - 90);
      s9.write(D9);
      s10.write(D10); 
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4 + 90;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8 - 90;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3);
      s4.write(D4 + 90);
      s5.write(D5);
      s6.write(D6);
      s7.write(D7);
      s8.write(D8 - 90);
      s9.write(D9);
      s10.write(D10);
      pos1 = D1;
      pos2 = D2;
      pos3 = D3;
      pos4 = D4 + 90;
      pos5 = D5;
      pos6 = D6;
      pos7 = D7;
      pos8 = D8 - 90;
      pos9 = D9;
      pos10 = D10;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

void Humanoid::Fight()
{
  Servo s1;
  Servo s2;
  Servo s3;
  Servo s4;
  Servo s5;
  Servo s6;
  Servo s7;
  Servo s8;
  Servo s9;
  Servo s10;
  s1.attach(_pin1);
  s2.attach(_pin2);
  s3.attach(_pin3);
  s4.attach(_pin4);
  s5.attach(_pin5);
  s6.attach(_pin6);
  s7.attach(_pin7);
  s8.attach(_pin8);
  s9.attach(_pin9);
  s10.attach(_pin10);
  while(true)
  {
    Clock(_t);
  int S[3][10]
    {
      {pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,pos10},
      {D1,D2,D3 - 45,D4 + 20,D5 + 35,D6 + 90,D7 + 45,D8 - 20,D9 - 35,D10 - 90},
      {0,0,0,0,0,0,0,0,0,0}
    };
  
    int Actual1 = S[Total_Ticks][0];
    int Future1 = S[Future_Total_Ticks][0];
    int Actual2 = S[Total_Ticks][1];
    int Future2 = S[Future_Total_Ticks][1];
    int Actual3 = S[Total_Ticks][2];
    int Future3 = S[Future_Total_Ticks][2];
    int Actual4 = S[Total_Ticks][3];
    int Future4 = S[Future_Total_Ticks][3];
    int Actual5 = S[Total_Ticks][4];
    int Future5 = S[Future_Total_Ticks][4];
    int Actual6 = S[Total_Ticks][5];
    int Future6 = S[Future_Total_Ticks][5];
    int Actual7 = S[Total_Ticks][6];
    int Future7 = S[Future_Total_Ticks][6];
    int Actual8 = S[Total_Ticks][7];
    int Future8 = S[Future_Total_Ticks][7];
    int Actual9 = S[Total_Ticks][8];
    int Future9 = S[Future_Total_Ticks][8];
    int Actual10 = S[Total_Ticks][9];
    int Future10 = S[Future_Total_Ticks][9];

       if(Future1 == Future2 && Future2 == Future3 && Future3 == Future4 && Future4 == Future5 && Future5 == Future6 && Future6 == Future7 && Future7 == Future8 && Future8 == Future9 && Future9 == Future10 && Future10 == 0)
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3 + 20);
      s4.write(D4 + 20);
      s5.write(D5 + 45);
      s6.write(D6 + 90);
      s7.write(D7 - 20);
      s8.write(D8 - 20);
      s9.write(D9 - 45);
      s10.write(D10 - 90); 
      pos1 = D1;
      pos2 = D2;
      pos3 = D3 + 20;
      pos4 = D4 + 20;
      pos5 = D5 + 45;
      pos6 = D6 + 90;
      pos7 = D7 - 20;
      pos8 = D8 - 20;
      pos9 = D9 - 45;
      pos10 = D10 - 90;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
    
    if (Actual1 > Future1)
    {
      pos1 = Actual1 - (((Actual1 - Future1) / _t) * milInTick);
    }
    else 
    { 
      pos1 = Actual1 + (((Future1 - Actual1) / _t) * milInTick);
    }
  
    if(Actual2 > Future2)
    {
      pos2 = Actual2 - (((Actual2 - Future2) / _t) * milInTick);
    }
    else
    {
      pos2 = Actual2 + (((Future2 - Actual2) / _t) * milInTick);
    }
  
    if(Actual3 > Future3)
    {
      pos3 = Actual3 - (((Actual3 - Future3) / _t) * milInTick);
    }
    else
    {
      pos3 = Actual3 + (((Future3 - Actual3) / _t) * milInTick);
    }
  
     if(Actual4 > Future4)
    {
      pos4 = Actual4 - (((Actual4 - Future4) / _t) * milInTick);
    }
    else
    {
      pos4 = Actual4 + (((Future4 - Actual4) / _t) * milInTick);
    }

    if(Actual5 > Future5)
    {
      pos5 = Actual5 - (((Actual5 - Future5) / _t) * milInTick);
    }
    else
    {
      pos5 = Actual5 + (((Future5 - Actual5) / _t) * milInTick);
    }
    
    if(Actual6 > Future6)
    {
      pos6 = Actual6 - (((Actual6 - Future6) / _t) * milInTick);
    }
    else
    {
      pos6 = Actual6 + (((Future6 - Actual6) / _t) * milInTick);
    }
    
    if(Actual7 > Future7)
    {
      pos7 = Actual7 - (((Actual7 - Future7) / _t) * milInTick);
    }
    else
    {
      pos7 = Actual7 + (((Future7 - Actual7) / _t) * milInTick);
    }
    
    if(Actual8 > Future8)
    {
      pos8 = Actual8 - (((Actual8 - Future8) / _t) * milInTick);
    }
    else
    {
      pos8 = Actual8 + (((Future8 - Actual8) / _t) * milInTick);
    }
    
    if(Actual9 > Future9)
    {
      pos9 = Actual9 - (((Actual9 - Future9) / _t) * milInTick);
    }
    else
    {
      pos9 = Actual9 + (((Future9 - Actual9) / _t) * milInTick);
    }
    if(Actual10 > Future10)
    {
      pos10 = Actual10 - (((Actual10 - Future10) / _t) * milInTick);
    }
    else
    {
      pos10 = Actual10 + (((Future10 - Actual10) / _t) * milInTick);
    }
   
    if (Future_Total_Ticks < Time)
    {
      s1.write(pos1);
      s2.write(pos2);
      s3.write(pos3);
      s4.write(pos4);
      s5.write(pos5);
      s6.write(pos6);
      s7.write(pos7);
      s8.write(pos8);
      s9.write(pos9);
      s10.write(pos10);
    }
    else 
    {
      s1.write(D1);
      s2.write(D2);
      s3.write(D3 + 20);
      s4.write(D4 + 20);
      s5.write(D5 + 45);
      s6.write(D6 + 90);
      s7.write(D7 - 20);
      s8.write(D8 - 20);
      s9.write(D9 - 45);
      s10.write(D10 - 90); 
      pos1 = D1;
      pos2 = D2;
      pos3 = D3 + 20;
      pos4 = D4 + 20;
      pos5 = D5 + 45;
      pos6 = D6 + 90;
      pos7 = D7 - 20;
      pos8 = D8 - 20;
      pos9 = D9 - 45;
      pos10 = D10 - 90;
      s1.detach();
      s2.detach();
      s3.detach();
      s4.detach();
      s5.detach();
      s6.detach();
      s7.detach();
      s8.detach();
      s9.detach();
      s10.detach();
      break;
    }
  }
  Restart = millis();
}

