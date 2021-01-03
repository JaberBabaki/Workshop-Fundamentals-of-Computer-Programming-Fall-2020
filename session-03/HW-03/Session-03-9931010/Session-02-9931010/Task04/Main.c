#include <stdio.h>

int main() {
    double a,b,c,f,e,d;
    scanf(" %lf", &a);
    scanf(" %lf", &b);
    scanf(" %lf", &c);
    scanf(" %lf", &d);
    scanf(" %lf", &e);
    scanf(" %lf", &f);
    printf("%6d\t",a);
    printf("%6.03lf\t",b);
    printf("%6d\n",(int)c);
    printf("%6d\t",(int)d);
    printf("%6.03lf\t",e);
    printf("%6d\n",(int)f);
    return 0;
}
