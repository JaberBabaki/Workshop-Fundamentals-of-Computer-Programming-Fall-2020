//
// Created by jaberALU on ۱۴/۱۲/۲۰۲۰.
//
#include <stdio.h>

int main() {

/*    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){//i=1,i=2,i=3,i=4
            printf("%c",64+i);
        }
        printf("\n");
    }*/

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j==5){
                continue;
            }
            printf("%d",j);
        }
        for(int m=0;m<i;m++){//7    5   3   1
            printf(" ");
        }
        for(int n=i;n>=1;n--){
            printf("%d",n);
        }
        printf("\n");

    }

/*
  A/i=1 j=1
  B B/i=2 j=1..2
  C C C/i=3 j=1..3
  D D D D
  * * * * *
 */

    return 0;
}
