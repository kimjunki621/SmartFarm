void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println("Hello~");
  char c='a';

  Serial.println(c);
  Serial.write(c);
  Serial.println();
  Serial.println();

  char s[]="abcd";
  Serial.println(s);
  Serial.write(s);
  Serial.println();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
