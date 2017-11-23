void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (LED_BUILTIN, HIGH);
delay(100);
digitalWrite (12, HIGH);
delay(1000);
digitalWrite (11, HIGH);
delay(1000);

digitalWrite (LED_BUILTIN, LOW);
delay(100);
digitalWrite (12, LOW);
delay(1);
digitalWrite (11, LOW);
delay(1000);
}
