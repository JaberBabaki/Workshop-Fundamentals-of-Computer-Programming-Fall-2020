//
// Created by jaberALU on ۱۳/۱۲/۲۰۲۰.
//
#include <stdio.h>
#include <stdbool.h>

int main() {

    //check ugly number
    /*int n;
    scanf("%d", &n);
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }

    if(n==1){
        printf("number is ugly\n");
    }else{
        printf("number is not ugly\n");
    }*/

    //detect lucky number
    /*int n,splitNumber;
    bool state=true;

    scanf("%d",&n);

    while(n>0){
        splitNumber=n%10;
        if (!(splitNumber==4 ||  splitNumber==7)){
            state=false;
            //break;
        }
        n=n/10;
    }

    if(state){
        printf("Lucky number");
    }else{
        printf("isn't lucky number");
    }*/

    /*//detect-02 lucky number
    int n,splitNumber,sum=0;
    bool state=true;

    scanf("%d",&n);

    while(n>0){
        splitNumber=n%10;
        if (splitNumber==4 ||  splitNumber==7){
            sum++;
        }
        n=n/10;
    }

    while(sum>0){
        splitNumber=sum%10;
        if (!(splitNumber==4 ||  splitNumber==7)){
            state=false;
            //break;
        }
        sum=sum/10;
    }

    if(state){
        printf("neighbour Lucky number");
    }else{
        printf("isn't neighbour lucky number");
    }*/

    //detect-03 lucky number
    int n,splitNumber,sum=0;
    bool state=true;

    scanf("%d",&n);

    while(n>0){
        splitNumber=n%10;
        if (splitNumber==4 ||  splitNumber==7){
            sum++;
        }
        n=n/10;
    }

    while(sum>0){
        splitNumber=sum%10;
        if (!(splitNumber==4 ||  splitNumber==7)){
            state=false;
            //break;
        }
        sum=sum/10;
    }

    if(state){
        printf("neighbour Lucky number");
    }else{
        printf("isn't neighbour lucky number");
    }



    return 0;
}

