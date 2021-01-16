//
// Created by jaberALU on ۱۴/۱۲/۲۰۲۰.
//
#include <stdio.h>
int main(){

    int n;
    float lsum=0,rsum=0;
    scanf("%d",&n);
    //f(n)=1+(1/2)+(1/3)+....+(1/2^n);
    //f(n=5)=1+0.5+0.33+0.25+0.20

    for(int i=1;i<=n;i++){
        lsum=lsum+((float)1/(float)i);
    }

    for(int i=n;i>=1;i--){
        rsum=rsum+((float)1/(float)i);
    }

    printf("%f\n",lsum);
    printf("%f\n",rsum);

    if(lsum==rsum){
        printf("equal");
    }else{
        printf(" notequal");
    }


    return 0;

}
