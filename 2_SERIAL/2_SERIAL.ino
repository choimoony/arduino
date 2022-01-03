void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("hello");
  Serial.print(" world!");

  Serial.print("\n");

  Serial.println("hello");
  Serial.println(" world!");
  
  
  Serial.end();
}
