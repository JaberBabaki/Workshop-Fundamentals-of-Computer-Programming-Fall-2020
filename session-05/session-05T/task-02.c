//
// Created by jaber babaki[jaber.babaki94@gmail.com] on 2020/12/05.
//
#include <stdio.h>
#include <math.h>

int main() {

    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;

    float m = 0;
    float n = 0;
    float u = 0;
    float h = 0;

    printf("Enter the coordinates (x,y)\n");
    scanf("%d,%d %d,%d %d,%d %d,%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    m = ((float) (y1 - y4) / (float) (x1 - x4) * (x2 - x1)) + y1;
    n = ((float) (y1 - y4) / (float) (x1 - x4)) * (x3 - x1) + y1;

    u = ((float) (y2 - y4) / (float) (x2 - x4) * (x3 - x1)) + y2;
    h = ((float) (y1 - y3) / (float) (x1 - x3) * (x2 - x1)) + y1;

    printf("%f\t%f\n", m, n);

    if (m == y2 && n == y3) {
        printf("ALL in one line\n");
    } else if (m == y2 || n == y3 || u == y3 || h == y2) {
        printf("Three in one line\n");
    } else {
        float AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float CD = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float DA = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
        printf("%f\t%f\t%f\t%f\n", AB, BC, CD, DA);
        if (AB == BC && BC == CD && CD == DA) {
            printf("Dimond\n");
        } else {
            printf("none\n");
        }
    }

    /*int m = 0;
    int n = 0;
    int s = 0;

    if (!((x2 - x1) == 0)) {
        m = (y2 - y1) / (x2 - x1);
    }
    if (!((x3 - x2) == 0)) {
        n = (y3 - y2) / (x3 - x2);
    }
    if (!((x4 - x3) == 0)) {
        s = (y4 - y3) / (x4 - x3);
    }

    printf("%d\t%d\t%d\n", m, n, s);

    if (m == n && n == s) {
        printf("ALL in one line\n");
    } else if (m == n || n == s || m == s) {
        printf("Three in one line\n");
    }else{

    }

    printf("%d,%d\t", x1, y1);
    printf("%d,%d\t", x2, y2);
    printf("%d,%d\t", x3, y3);
    printf("%d,%d\t", x4, y4);*/

    return 0;
}
