//week05_3_arduio_do_re_mi_Serial_blink
//修改自week05_2_arduio_do_re_mi_Serial_tone_notone
void setup() {
  pinMode(8, OUTPUT); //BUZZER 8 聲音
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(13, OUTPUT);
  
  Serial.begin(9600); // USB Serial 開始傳輸, 速度 9600 bps
  tone(8, 523, 100); delay(200); //do
  tone(8, 587, 100); delay(200);//RE
  tone(8, 659, 100); delay(200);//Mi
  tone(8, 587, 100); delay(200);//RE
  tone(8, 523, 100); delay(200);//DO
  
}
char c = '0';//0:不要發聲音 1:DO 2:RE 3:MI
void loop() {
  if (Serial.available()){ // 如果 USB Serial 有收到資料
    c = Serial.read();//就讀進來(不再宣告)
  }
  for(int i=10;i<=13;i++) digitalWrite(i, LOW);//先都暗下來
  if(c>='0' && c<='3')  digitalWrite(c-'0'+10, HIGH);
    if (c=='0') noTone(8);//不要發聲音
    if (c=='1') tone(8, 523); // Do 一直發聲
    if (c=='2') tone(8, 587); // Re 一直發聲
    if (c=='3') tone(8, 659); // Mi 一直發聲
}
