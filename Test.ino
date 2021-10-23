#include <XInput.h>



void setup() 
{
  XInput.begin();
  pinMode(14,INPUT_PULLDOWN);
  pinMode(13,OUTPUT);
}

void loop() 
{
  bool val = digitalRead(14);

  if(val == true)
  {
    digitalWrite(13,val);
    XInput.press(BUTTON_A);
  }
  else if(val == false)
  {
    digitalWrite(13,val);
    XInput.release(BUTTON_A);
  }
}
