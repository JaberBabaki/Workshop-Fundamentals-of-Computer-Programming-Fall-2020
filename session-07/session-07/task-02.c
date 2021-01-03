//
// Created by jaberALU on ۲۱/۱۲/۲۰۲۰.
//
#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main() {
    printf("Hello, World!\n");
    //1 1 2 3 5 8 13 21....
/*   int a,b,c,n=0;
    a=1;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=2;i<44;i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }*/

/*
    int a,b,n=0;
    a=1;
    b=1;
    for(int i=3;i<=n;i++){
        if(i%2==1){
            a=a+b;a=2,5
        }else{
            b=b+a;b=3,8
        }
    }
//F(n)=F(n-1)+f(n-2)
    if(n%2==1){
        printf("%d\n",a);
    }else{
        printf("%d\n",b);
    }
*/
    printf("fib = %d",fibo(44));

    //1 1 2 3 5 8 13 21 ...
    // 8/5=1.6
    // 13/8=1.624
    // 21/13=1.624567

    return 0;
}

