#include <stdio.h>
int main()
{
int t;
printf("enter the temperature");
scanf("%d",&t);
if(t<0) printf("freezing weather");
else if(t=0-10) printf("very cold weather");
else if(t=10-20) printf("cold weather");
else if(t=20-30) printf("normal temp");
else if(t=30-40) printf("its hot");
else if(t>=40) printf("its very hot");
return 0;
}
