const int LED = 2;
const int button = 3;
void setup()
{
  pinMode(button, INPUT_PULLUP);  
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop()
{
  int buttonState = digitalRead(button);
  
  if (buttonState == HIGH) {            
    digitalWrite(LED, HIGH);      
  } else {                             
    digitalWrite(LED, LOW);       
  }
}
