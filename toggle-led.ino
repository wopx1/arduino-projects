int ledState = LOW;   // المتغير الذكي — يتذكر حالة الـ LED

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {  // لو ضغطت
    ledState = !ledState;         // اعكس الحالة (شغال↔مطفي)
    digitalWrite(13, ledState);
    delay(300);                   // فاصل بين الضغطات
  }
}
