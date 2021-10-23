#include <XInput.h>



void setup() 
{
  XInput.begin();
  pinMode(14,INPUT_PULLDOWN);
  pinMode(13,OUTPUT);
}

void loop() 
{
  bool stateA = digitalRead(14);

  if(stateA == true)
  {
    digitalWrite(13,stateA);
    XInput.press(BUTTON_A);
  }
  else if(stateA == false)
  {
    digitalWrite(13,stateA);
    XInput.release(BUTTON_A);
  }
}
