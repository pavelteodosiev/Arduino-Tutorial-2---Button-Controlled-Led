//This code if for Button Controlled Led. Subscribe to my YouTube Channel: TechSpaceCrafter

int led = 12;
int button = 8;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); //we should set button as INPUT, and also we should enable the internal pull-up resistor. So we should use INPUT_PULLUP in pinMode() function.
}

void loop(){
  int SensorValue = digitalRead(button);
  if(SensorValue)
  {
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW); 
  }
}
