//
// Created by jaber babaki[jaber.babaki94@gmail.com] on 2020/12/05.
//
#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(){

    double sin;
    double cos;
    char sign;

    printf("Please input the sign(+/-):\n");
    scanf("%c", &sign);

    printf("Input sin  between -1 and 1\n");
    scanf("%lf", &sin);

    cos = sqrt(1 - sin * sin);
//    cos = sqrt(1 - pow(sin, 2));

    if (sign == '-') {
        cos *= -1;
    }
    if (sign != '-' || sign!='+') {
        return 0;
    }
    printf("Cos: %lf\n", cos);

    if (sin > 0 && cos > 0) {
        printf("Quarter 1\n");
    } else if (sin > 0 && cos < 0) {
        printf("Quarter 2\n");
    } else if (sin < 0 && cos < 0) {
        printf("Quarter 3\n");
    } else if (sin < 0 && cos > 0) {
        printf("Quarter 4\n");
    } else {
        printf("None\n");
    }

    return 0;
}
