#include <XInput.h>



void setup() 
{
  // put your setup code here, to run once:
  XInput.begin();
  pinMode(14,INPUT_PULLDOWN);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int val = digitalRead(14);

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
