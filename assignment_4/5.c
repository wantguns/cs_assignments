/* WAP to find the eligibility of admission of a student for a professional institute based on the
following criteria:
Marks in Mathematics >=65,
Marks in Physics >=55,
Marks in Chemistry >=60,
Total in all three subjects >=190 or Total in Mathematics and Chemistry >=130 */

#include <stdio.h>
int main() {
int math, phy, chem, total, tot;
printf("Enter the marks obtained in Maths, Physics, Chemistry : ");
scanf("%d%d%d",&math,&phy,&chem);
total=math+phy+chem;
tot=math+chem;
if((math>=65 && phy>=55 && chem>=60 && total>=190) || tot>=130)
	printf("The candidate is eligible for admission.\n");
else
	printf("The candidate is not eligible for admission.\n");
return 0;
}
