void setup() {
  // put your setup code here, to run once:
  for (int i = 4; i <= 13; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 4; i <= 13; i++)
  { digitalWrite(i, HIGH);
    delay(200);
  }


  for (int i = 13; i >= 9; i--)
  { digitalWrite(i, LOW);
    delay(200);
  }
}
