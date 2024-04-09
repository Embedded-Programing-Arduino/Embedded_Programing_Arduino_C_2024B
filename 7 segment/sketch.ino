#define A 13
#define B 12
#define C 11
#define D 10
#define E 9
#define F 8
#define G 7


void setup() {
  // put your setup code here, to run once:
  for (int i = 6; i <= 13; i++)
    pinMode(13, OUTPUT);
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
  // put your main code here, to run repeatedly:
  one(1);
  delay(500);
  one(0);

  two(1);
  delay(500);
  two(0);

  three(1);
  delay(500);
  three(0);

  four(1);
  delay(500);
  four(0);

  five(1);
  delay(500);
  five(0);

  six(1);
  delay(500);
  six(0);

  seven(1);
  delay(500);
  seven(0);

  eight(1);
  delay(500);
  eight(0);


  nine(1);
  delay(500);
  nine(0);

}
