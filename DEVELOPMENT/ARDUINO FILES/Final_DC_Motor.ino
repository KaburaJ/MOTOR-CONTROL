  int en = 9;
int in1 = 5;
int in2 = 4;

void setup() {
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}

void loop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(en, 255);
  delay(4000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  //delay(4000);

  //digitalWrite(in1, HIGH);
  //digitalWrite(in2, LOW);
  //analogWrite(en, 80);
  
  //delay(4000);

}
