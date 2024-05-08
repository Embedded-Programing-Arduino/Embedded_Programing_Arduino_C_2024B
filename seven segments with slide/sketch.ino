#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 8
#define G 7


void setup() {
  for (int i = 2; i < 10; i++)
    pinMode(i, OUTPUT);

}
void zero(int mode) {
  digitalWrite(2, mode);
  digitalWrite(3, mode);
  digitalWrite(4, mode);
  digitalWrite(5, mode);
  digitalWrite(6, mode);
  digitalWrite(8, mode);

}
void one(int mode) {
  digitalWrite(B, mode);
  digitalWrite(C, mode);
}

void two(int mode) {
  digitalWrite(A, mode);
  digitalWrite(B, mode);
  digitalWrite(G, mode);
  digitalWrite(E, mode);
  digitalWrite(D, mode);
}

void three(int mode) {
  digitalWrite(A, mode);
  digitalWrite(B, mode);
  digitalWrite(G, mode);
  digitalWrite(C, mode);
  digitalWrite(D, mode);
}

void four(int mode) {
  digitalWrite(B, mode);
  digitalWrite(G, mode);
  digitalWrite(F, mode);
  digitalWrite(C, mode);
}
void five(int mode) {

  digitalWrite(A, mode);
  digitalWrite(F, mode);
  digitalWrite(G, mode);
  digitalWrite(C, mode);
  digitalWrite(D, mode);
}
void six(int mode) {
  digitalWrite(A, mode);
  digitalWrite(F, mode);
  digitalWrite(C, mode);
  digitalWrite(G, mode);
  digitalWrite(E, mode);
  digitalWrite(D, mode);
}
void seven(int mode) {
  digitalWrite(A, mode);
  digitalWrite(B, mode);
  digitalWrite(C, mode);
}
void eight(int mode) {
  digitalWrite(A, mode);
  digitalWrite(B, mode);
  digitalWrite(E, mode);
  digitalWrite(G, mode);
  digitalWrite(C, mode);
  digitalWrite(D, mode);
  digitalWrite(F, mode);
}
void nine(int mode) {
  digitalWrite(A, mode);
  digitalWrite(B, mode);
  digitalWrite(C, mode);
  digitalWrite(D, mode);
  digitalWrite(F, mode);
  digitalWrite(G, mode);
}

void loop() {


  int readAnalog = analogRead(A0);

  int number = map(readAnalog,0,1023,0,9);


    switch (number) {
      case 0:
        zero(HIGH);
        delay(500);
        zero(LOW);
        delay(500);
        break;
      case 1:
        one(HIGH);
        delay(500);
        one(LOW);
        delay(500);
        break;
      case 2:
        two(HIGH);
        delay(500);
        two(LOW);
        delay(500);
        break;
         case 3:
        three(HIGH);
        delay(500);
        three(LOW);
        delay(500);
        break;
         case 4:
        four(HIGH);
        delay(500);
        four(LOW);
        delay(500);
        break;
         case 5:
        five(HIGH);
        delay(500);
        five(LOW);
        delay(500);
        break;
         case 6:
        six(HIGH);
        delay(500);
        six(LOW);
        delay(500);
        break;
         case 7:
        seven(HIGH);
        delay(500);
        seven(LOW);
        delay(500);
        break;
         case 8:
        eight(HIGH);
        delay(500);
        eight(LOW);
        delay(500);
        break;
         case 9:
        nine(HIGH);
        delay(500);
        nine(LOW);
        delay(500);
        break;

    }



}
