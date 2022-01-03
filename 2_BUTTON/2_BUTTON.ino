int red = 9;
int red_button = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(red_button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(red_button)==HIGH){
    digitalWrite(9,HIGH);
    }
  else{
    digitalWrite(9,LOW);  
  }
  

}
