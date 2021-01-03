//
// Created by jaberALU on ۲۸/۱۲/۲۰۲۰.
//
#include <stdio.h>

int memory[1000];
int fib(int n){
    if(n==1||n==2){
        return 1;
    }

    if(memory[n]==0){
        memory[n]=fib(n-1)+fib(n-2);
    }

    return memory[n];
}
int main() {
    printf("%d",fib(55));

    int n;
    scanf("%d",&n);
    int mem[n];
    mem[0]=1;
    mem[1]=1;
    for()

    return 0;
}

