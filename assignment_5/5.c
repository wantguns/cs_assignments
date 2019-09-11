/* WAP to print and count all those integers that are not divisible by either 2 or 3 and lie between 1 and
200. Use goto statement instead of using any loops. */
#include <stdio.h>

int main() {
    int num = 0;
    check : {
        if(num%2 ==0 || num%3==0)
        goto print;
        else
        goto next;
    }
    print : {
        printf("%d \n", num);
        if(num >= 200) return 0;
        num++;
        goto check;
    }
    next : {
        if(num >= 200) return 0;
        num++;
        goto check;
    }
}
