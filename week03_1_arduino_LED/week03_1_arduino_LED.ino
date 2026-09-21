//week03_1_arduino_LED_
//迎新宿營,會用LED發光 光舞, 使用pin腳
void setup() {
  pinMode(2, INPUT_PULLUP); //第二是按鈕, 沒按時"拉高"
  for(int i=3; i<=13; i++) pinMode(i, OUTPUT);

}

void loop() {
  if(digitalRead(2)==HIGH) { //沒有按下去`拉高
    for(int i=3; i<=7; i++) digitalWrite(i, HIGH);
    for(int i=8; i<=13; i++) digitalWrite(i, LOW);
  } else{
    for(int i=3; i<=7; i++) digitalWrite(i, LOW);
    for(int i=8; i<=13; i++) digitalWrite(i, HIGH);
    
  }

}
