//
// Created by jaber babaki [jaber.babaki94@gmail.com] on 2020/11/30.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int AB,AC,BC,D;
    //30*(3.14/180)
    float f=sin(1.57);
    printf("jaber\n");
    srand(time(0));

    AB=rand()%(25-5+1)+5;//8
    AC=rand()%(25-5+1)+5;//11
    D=rand()%91;//37

    printf("%d\t%d\t%d\n",AB,AC,D);

    BC=(AB*AB)+(AC*AC)-(2*AB*AC)*cos(D);
    BC=sqrt(BC);//7

    printf("\t%d\t",BC);//7

    return 0;
}
