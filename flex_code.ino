#include <Servo_ESP32.h>
/*********/
static const int servoPin1 = 14; // pin printed as G14
static const int flux1 = 34;// pin printed as G12

static const int servoPin2 = 27; // pin printed as G27
static const int flux2 = 35;// pin printed as G13

static const int servoPin3 = 13; // pin printed as G26
static const int flux3 = 25;// pin printed as G36

static const int servoPin4 = 15; // pin printed as G25
static const int flux4 = 26;// pin printed as G35

static const int servoPin5 = 32; // pin printed as G33
static const int flux5 = 33;// pin printed as G34
/*********/
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
/*********/
Servo_ESP32 m1;
Servo_ESP32 m2;
Servo_ESP32 m3;
Servo_ESP32 m4;
Servo_ESP32 m5;
/*********/
void setup() {
    Serial.begin(115200);
    m1.attach(servoPin1);
    m2.attach(servoPin2);
    m3.attach(servoPin3);
    m4.attach(servoPin4);
    m5.attach(servoPin5);
}
/*********/
void loop() {
    int x1 = analogRead(flux1);
    int x2 = analogRead(flux2);
    int x3 = analogRead(flux3);
    int x4 = analogRead(flux4);
    int x5 = analogRead(flux5);
    Serial.print(x1);
    Serial.print("     ");
    Serial.print(x2);
    Serial.print("     ");
    Serial.print(x3);
    Serial.print("     ");
    Serial.print(x4);
    Serial.print("     ");
    Serial.print(x5);
    Serial.println();   
/***FLUX 1******/
    if(x1<870)
  {
    m1.write(count1);
    if(count1>175)
    {
      
    }
    else
    {
      count1=count1+30;
      delay(10);
    }
  }
  else
  {
    m1.write(count1);
    if(count1<10)
    {
      
    }
    else
    {
      count1=count1-30;
      delay(10);
    }
  }
   
/***FLUX 2******/

    if(x2<910)
  {
    m2.write(count2);
    if(count2>175)
    {
      
    }
    else
    {
      count2=count2+30;
      delay(10);
    }
  }
  else
  {
    m2.write(count2);
    if(count2<10)
    {
      
    }
    else
    {
      count2=count2-30;
      delay(10);
    }
  }
/***FLUX 3******/
    if(x3<1345)
  {
    m3.write(count3);
    if(count3>175)
    {
      
    }
    else
    {
      count3=count3+30;
      delay(10);
    }
  }
  else
  {
    m3.write(count3);
    if(count3<10)
    {
      
    }
    else
    {
      count3=count3-30;
      delay(10);
    }
  }
   
/***FLUX 4******/

    if(x4<1415)
  {
    m4.write(count4);
    if(count4>175)
    {
      
    }
    else
    {
      count4=count4+30;
      delay(10);
    }
  }
  else
  {
    m4.write(count4);
    if(count4<10)
    {
      
    }
    else
    {
      count4=count4-30;
      delay(10);
    }
  }
/***FLUX 5******/

    if(x5<1295)
  {
    m5.write(count5);
    if(count5>175)
    {
      
    }
    else
    {
      count5=count5+30;
      delay(10);
    }
  }
  else
  {
    m5.write(count5);
    if(count5<10)
    {
      
    }
    else
    {
      count5=count5-30;
      delay(10);
    }
  }
    
    delay(100);
}
