//
// Created by jaberALU on ۱۳/۱۲/۲۰۲۰.
//
#include <stdio.h>

int main() {

    //f(n)=1+(1/2)+(1/3)+(1/4)+...+(1/2^n);
    //f(n)=1+(1/2)+(1/3)+(1/4)+(1/5)= 1+0.5+0.33+0.25+0.20

    float lsum=0;
    float rsum=0;
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        lsum+=((float)1/(float)i);
    }
    printf("lsum= %f\n",lsum);

    for(int i=n;i>=1;i--){
        rsum+=((float)1/(float)i);
    }
    printf("rsum= %f\n",rsum);

    if(lsum==rsum){
        printf("equal");
    }else{
        printf("not equal");
    }

    return 0;
}
