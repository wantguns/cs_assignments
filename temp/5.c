#include<stdio.h>
int main() {
int math,phy,chem,total,tot;
printf("enter the marks obtained in math \n in phy \n in chem");
scanf("%d%d%d",&math,&phy,&chem);
total=math+phy+chem;
tot=math+chem;
if(math>=65&&phy>=55&&chem>=60&&total>=190||tot>=130)
	printf("the candidate is eligible for admission");
else
	printf("the candidate is not eligible");
return 0;
}
