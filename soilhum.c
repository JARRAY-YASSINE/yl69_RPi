#include <stdio.h>
#include <wiringPi.h>

#define YL69Pin 1

int Soil_Humidity( void ){

 while (1)
  {
    if (digitalRead (YL69Pin)) {
   
    printf("Dry\n");
    }
    else printf("Wet\n");

    delay (1000) ;
   
  }
return 0;
}
int main (void)
{
  wiringPiSetup () ;
  pinMode (YL69Pin, INPUT) ;
  Soil_Humidity();
  return 0 ;
}
