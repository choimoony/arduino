int red = 9;

void setup() 
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
}
 
void loop() 
{
  int reading = analogRead(A1);
  Serial.println(reading);
  int light = map(reading, 0, 1023, 0, 255);
  analogWrite(red, light);
  
}
