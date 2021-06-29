int PIN = A0 ;
int data = 0;

void setup ()
{
  pinMode(PIN, INPUT);
  Serial.begin(9600);  //시리얼통신 전송속도 9600
}
void loop()
{
  int data = analogRead(PIN);
  Serial.println(data); 
  delay(1000);
}
