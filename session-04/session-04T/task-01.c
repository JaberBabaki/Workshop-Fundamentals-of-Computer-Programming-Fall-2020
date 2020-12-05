//
// Created by jaber babaki[jaber.babaki94@gmail.com] on 2020/11/28
//
#include <stdio.h>
int main () {
    char c1;
    int x1;
    scanf("%c%d",&c1,&x1);
    char new_char=c1+x1;
    char upper_new_char=new_char-32;
    printf("%d\t%c\t%c",new_char,new_char,upper_new_char);
    return 0;
}