// C++ code
//
int  senv=0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  senv=analogRead(A0);
  Serial.println(senv);
  delay(1);
  digitalWrite(13, HIGH);
  delay(senv); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(senv); // Wait for 1000 millisecond(s)
}