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

int arr[][] = {

{1,1,1,1,1,1,1,0},




}

void loop() {


  int readAnalog = analogRead(A0);
  int number = map(readAnalog,0,1023,0,9);


    switch (number) {
      case 0:
        zero(HIGH);
        zero(LOW);
        break;
      case 1:
        one(HIGH);
        one(LOW);
        break;
      case 2:
        two(HIGH);
        two(LOW);
        break;
         case 3:
        three(HIGH);
        three(LOW);
        break;
         case 4:
        four(HIGH);
        four(LOW);
        break;
         case 5:
        five(HIGH);
        five(LOW);
        break;
         case 6:
        six(HIGH);
        six(LOW);
        break;
         case 7:
        seven(HIGH);
        seven(LOW);
        break;
         case 8:
        eight(HIGH);
        eight(LOW);
        break;
         case 9:
        nine(HIGH);
        nine(LOW);
        break;

    }



}
