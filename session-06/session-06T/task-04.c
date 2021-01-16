//
// Created by jaberALU on ۱۳/۱۲/۲۰۲۰.
//
#include <stdio.h>

int main() {
    /*
          *
          **
          ***
          ****
          *****
    */
    /*for(int i=1;i<=5;i++){
        for(int j=0; j<i;j++){
            printf("*");
        }
        printf("\n");
    }*/


/*
    for(int i=1;i<=5;i++){
        for(int j=0; j<i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }*/
/*    int j=1;
    for (int i = 1; i <= 5; i++) {
        for (j=1; j <= i; j++) {
            if(j==5){
                continue;
            }
            printf("%d",j);

        }
        for (int m = 1; m <=9-(2*i); m++) {
            printf(" ");
        }
        for (int n = i; n >= 1; n--) {
            printf("%d",n);
        }
        printf("\n");
    }*/


/*    int n, x,  y;
    scanf("%d",&n);
    for(x = 1; x <= n; x++)
    {
        for(y = 1; y <= n; y++)
        {
            if(y <= x)
                printf("%d",y);
            else
                printf(" ");
        }
        for(y = n; y >= 1; y--)
        {
            if(y <= x)
                printf("%d",y);
            else
                printf(" ");
        }
        printf("\n");
    }*/

    int x, y, i;
    for (y = 20- 1; y >= 0; y--, putchar('\n')) {
        for (i = 0; i < y; i++) putchar(' ');
        for (x = 0; x + y < 20; x++)
            printf((x & y) ? "  " : "* ");
    }
    return 0;
}

