int trig = 8;
int echo = 7; 
int red = 9; 

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(red, OUTPUT);
}
 
void loop() {
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
 
  unsigned long duration = pulseIn(echo, HIGH);
  
  // 초음파의 속도는 초당 340미터를 이동하거나, 29마이크로초 당 1센치를 이동합니다.
  // 왕복이기 때문에 2를 더 나누어주어야함.
  float distance = duration / 29.0 / 2.0;
 
  // 측정된 거리 값를 시리얼 모니터에 출력합니다.
  Serial.print(distance);
  Serial.println("cm");

  if(distance < 5){
    digitalWrite(red, HIGH);
  }else{
    digitalWrite(red, LOW);
    
  }
  
  delay(200);
}
