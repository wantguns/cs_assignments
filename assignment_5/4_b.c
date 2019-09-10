/* WAP to print pascals triangle */

#include <stdio.h>

int combination(int c, int num) {
if ( c == 0 || num == 0) return 1;
else {
        int num1, c1, nume = 1, denom = 1, diff;
        num1 = num;
        c1 = c;
        diff = c - num;

        while(c1) {
        	nume *= c1;
        	c1--;
        }

        while(num1) {
        	denom *= num1;
        	num1--;
        }
        
	if(diff != 0){ 
		while (diff) {                
		denom *= diff;
                diff--;
		}
        }

        return (nume/denom);
	}
}

int main() {
 printf("Enter the height of the triangle : ");
 int height;
 scanf("%d", &height);
 
 for(int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) printf(" ");
        for (int j = 0; j <= i; j++){
        printf("%d ", combination(i, j));        
        }
        printf("\n");
 }
 return 0;
 }
 





