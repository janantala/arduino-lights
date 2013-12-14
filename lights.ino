int pinA = 8;
int pinB = 9;
int pinC = 10;
int pinD = 11;
int pinE = 12;

int sleepTime = 150;

void clear(){
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
}

void setup(){
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
}

void loop(){

  clear();
  digitalWrite(pinA, HIGH);
  delay(sleepTime);
  
  clear();
  digitalWrite(pinB, HIGH);
  delay(sleepTime);
  
  clear();
  digitalWrite(pinC, HIGH);
  delay(sleepTime);
  
  clear();
  digitalWrite(pinD, HIGH);
  delay(sleepTime);
  
  clear();
  digitalWrite(pinE, HIGH);
  delay(sleepTime);
}
