int red = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  Serial.println(light);

  if(light<500){
    
    digitalWrite(red,HIGH);
  }else{
    
    digitalWrite(red,LOW);
    
    }
  
}
