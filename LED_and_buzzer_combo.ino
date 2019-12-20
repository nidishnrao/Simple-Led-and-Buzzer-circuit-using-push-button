
#define LEDPin 8
#define buzzer 9
#define PushButton 7

void setup() {
  // put your setup code here, to run once:
pinMode(PushButton, INPUT);
pinMode(LEDPin, OUTPUT);
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(PushButton)==LOW)
    {
      digitalWrite(LEDPin,HIGH);
      delay(100);

      tone(buzzer,2000);
    }

    else
    {
      digitalWrite(LEDPin,LOW);
      delay(100);

      noTone(buzzer);
      
    }
}
