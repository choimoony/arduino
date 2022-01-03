int piezo = 3; //스피커가 연결된 디지털핀 설정
int tones[] = {262, 294, 330, 349, 392, 440, 494, 523};
 
void setup() {
}
 
void loop() {
  for(int i=0; i<8; i++){
  tone(piezo,tones[i],500);  //tones : 음의 높낮이(주파수), 1000: 음의 지속시간(1초)
  delay(1000);
  } 
}
