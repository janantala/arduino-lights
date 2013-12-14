#include <stdarg.h> 

int pinA = 8;
int pinB = 9;
int pinC = 10;
int pinD = 11;
int pinE = 12;

int sleepTime = 500;

void clear(){
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
}

void light(int n, ...){
  clear();
  
  va_list pins;
  va_start(pins, n);
    
    for ( int x = 0; x < n; x++ ) {
        int p = va_arg(pins, int);
        Serial.println(p);
        digitalWrite(p, HIGH);
    }

  va_end(pins);
}

void setup(){
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
}

void loop(){
 
  light(4, pinB, pinC, pinD, pinE);
  delay(sleepTime);

  light(2, pinB, pinE);
  delay(sleepTime);

  light(2, pinC, pinD);
  delay(sleepTime);
  
  light(4, pinB, pinC, pinD, pinE);
  delay(sleepTime);
  
  clear();
  delay(sleepTime);
  
  light(1, pinB);
  delay(sleepTime);
  
  light(1, pinC);
  delay(sleepTime);
  
  light(1, pinD);
  delay(sleepTime);
  
  light(1, pinE);
  delay(sleepTime);
  
}
