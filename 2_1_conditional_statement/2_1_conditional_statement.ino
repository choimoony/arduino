void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 3;

  if(x>4){
    Serial.println("4보다 큽니다."); 
    }
  else{
    Serial.println("4보다 작습니다.");
    
    }
  
  
  
  Serial.end();
}
