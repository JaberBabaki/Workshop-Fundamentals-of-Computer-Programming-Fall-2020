//
// Created by jaber babaki[jaber.babaki94@gmail.com] on 2020/12/05.
//
#include <stdio.h>
#include <math.h>
#include <windef.h>

int main() {
    int x1=1, y1=12;
    int x2=-2, y2=5;
    int x3, y3;

    if(y1>x2 && y1<y2){
        printf("case1- %d\t%d\n",x2,y1);
    }else if(y2>x1 && y2<y1){
        printf("case2- %d\t%d\n",x1,y2);
    }

    int totalRange = max(y1, y2) - min(x1, x2);
    int sumOfRanges = (y1 - x1) + (y2 - x2);
    int overlappingInterval = 0;

    if (sumOfRanges > totalRange) { // means they overlap
        overlappingInterval = min(y1, y2) - max(x1, x2);
    }

    printf("%d\n",overlappingInterval);
    return 0;
}