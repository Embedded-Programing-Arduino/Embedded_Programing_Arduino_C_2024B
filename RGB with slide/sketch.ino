void setup() {
  // put your setup code here, to run once:
  for (int i = 9; i <= 11; i++)
    pinMode(i, OUTPUT);

    Serial.begin(9600);
}

void loop() {
  int analogRed = analogRead(A0);
  int analogGreen=analogRead(A1);
  int analogBlue=analogRead(A2);

  Serial.print("analogRed -> ");
  Serial.println(analogRed);
  Serial.print("analogGreen -> ");
  Serial.println(analogGreen);
  Serial.print("analogBlue -> ");
  Serial.println(analogBlue);

  int mapRed = map(analogRed,0,1023,0,255);
  int mapGreen = map(analogGreen,0,1023,0,255);
  int mapBlue = map(analogBlue,0,1023,0,255);

  Serial.print("mapRed -> ");
  Serial.println(mapRed);
  Serial.print("mapGreen -> ");
  Serial.println(mapGreen);
  Serial.print("mapBlue -> ");
  Serial.println(mapBlue);

  analogWrite(11,mapRed);
  analogWrite(10,mapGreen);
  analogWrite(9,mapBlue);

delay(500);
  
}
