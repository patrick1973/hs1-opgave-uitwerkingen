void runSetup()
{
  pinMode(LED_PIN,OUTPUT);
  Serial.begin(19200);
  lcd.begin(16, 2);
}
