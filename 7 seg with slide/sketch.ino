#define ROW 10
#define COL 7

const int mapNumbers[ROW][COL] = {
  // A  B  C  D  E  F  G
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1},
};

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;
const int DP = 9;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop() {

  int signal = analogRead(A0);

  int mapSig = map(signal, 0, 1023, 0, 9);


  digitalWrite(A, mapNumbers[mapSig][0] );
  digitalWrite(B, mapNumbers[mapSig][1] );
  digitalWrite(C, mapNumbers[mapSig][2] );
  digitalWrite(D, mapNumbers[mapSig][3] );
  digitalWrite(E, mapNumbers[mapSig][4] );
  digitalWrite(F, mapNumbers[mapSig][5] );
  digitalWrite(G, mapNumbers[mapSig][6] );

}

