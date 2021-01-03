//
// Created by jaberALU on ۲۸/۱۲/۲۰۲۰.
//
#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    char str[100];
    int ch_fre[255];

    gets(str);

    int i=0,ascii;
    while(str[i]!='\0'){
        ascii=(int)str[i];
        ch_fre[ascii]=ch_fre[ascii]+1;
        i++;
    }

    m=max(ch_fre);
    return 0;
}

