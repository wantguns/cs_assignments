/* WAP to read temperature in centigrade and display a suitable message according to temperature as
mentioned below :
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal temperature
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include <stdio.h>
int main()
{
int t;
printf("Enter the temperature : ");
scanf("%d",&t);
if(t<0) printf("freezing weather\n");
else if(t>=0 && t<10) printf("Very Cold weather\n");
else if(t>=10 && t<20) printf("Cold Weather\n");
else if(t>=20 && t<30) printf("Normal temperature\n");
else if(t>=30 && t<40) printf("It's Hot\n");
else if(t>=40) printf("It's very Hot\n");
return 0;
}
