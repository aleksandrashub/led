void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
   digitalWrite(9, HIGH);
   delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(1000);
}
