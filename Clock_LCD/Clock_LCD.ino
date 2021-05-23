int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int pin5 = 6;
int pin6 = 7;
int pin7 = 8;
int pin8 = 9;
int pin9 = 10;
int pin10 = 11;
int pin11 = 12;
int pin12 = 13;
int pinA0 = A0;
int pinA1 = A1;
int pinA2 = A2;
int pinA3 = A3;

int pulsetime = 500;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pinA0, OUTPUT);
  pinMode(pinA1, OUTPUT);
  pinMode(pinA2, OUTPUT);
  pinMode(pinA3, OUTPUT);
  //delay(5000);
}

void loop() {
  //test();
  //garb();
  //delay(1000);
  
  for(int i = 0; i < 200 ; i++){
  FU();
  }
  //delay(1000);
  for(int i = 0; i < 100 ; i++){
  A();
  }
  //delay(1000);
  for(int i = 0; i < 100 ; i++){
  B();
  }
  //delay(1000);
  for(int i = 0; i < 200 ; i++){
  C();
  }
  //delay(1000);
  for(int i = 0; i < 200 ; i++){
  D();
  }
  //delay(1000);
  for(int i = 0; i < 200 ; i++){
  E();
  }
}

void garb() {
  digitalWrite(pin1, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(10000);

}

void FU() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  //    digitalWrite(pin5,HIGH);
  //    digitalWrite(pin6,HIGH);
  digitalWrite(pin7, HIGH);
  //    digitalWrite(pin8,HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  //    digitalWrite(pin12,HIGH);
  digitalWrite(pinA0, HIGH);
  //    digitalWrite(pinA1,HIGH);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(10000);


}

void A() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pinA0, HIGH);
  digitalWrite(pinA1, HIGH);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(10000);
}


void B() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pinA0, HIGH);
  digitalWrite(pinA1, HIGH);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(10000);
}

void C() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  //    digitalWrite(pinA0,HIGH);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(4000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, HIGH);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(1000);
}

void D() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, HIGH);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  //    digitalWrite(pinA0,HIGH);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(1500);
}

void E() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pinA0, HIGH);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, HIGH);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(10000);
}


void test() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pinA0, LOW);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA3, LOW);
  delayMicroseconds(7000);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pinA0, HIGH);
  digitalWrite(pinA1, HIGH);
  digitalWrite(pinA2, HIGH);
  digitalWrite(pinA3, HIGH);
  delayMicroseconds(10000);
}
