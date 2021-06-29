void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
}
