//LI INDUSTRIES
//LIS - SOFTWARE DIVISION
#include <XBOXRECV.h>
#include <XBOXUSB.h>
#include <MotorDriver.h>
#include <seeed_pwm.h>


MotorDriver motor;
USB Usb;

void setup()
{

  Serial.begin(9600);
  motor.begin();
  motor.speed(1,100);
  delay(1000);
  motor.stop(1);
}
 
void loop()
{
    if(XboxRCV.Xbox360Connected[0]) {
      if(Xbox.getButtonClick(i,L2)){motor.speed(1, -100);}

     else{motor.stop(1);}

}

