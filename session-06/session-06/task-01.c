//
// Created by jaberALU on ۱۴/۱۲/۲۰۲۰.
//
#include <stdio.h>
#include <stdbool.h>

int main() {

    int n,splitNumber;
    int sum=0,state=1;
    scanf("%d",&n);

    while(n>0){
        splitNumber=n%10;
        if(splitNumber==4 || splitNumber==7){
            sum++;
        }
        n/=10;
    }

    while(sum>0){
        splitNumber=n%10;
        if(!(splitNumber==4 || splitNumber==7)){//(splitNumber!=4 && splitNumber!=7)
            state=0;
        }
        sum/=10;
    }


    if(state==1){
        printf("neighbour is lucky");
    }else{
        printf("neighbour isn't lucky");
    }

    return 0;
}
