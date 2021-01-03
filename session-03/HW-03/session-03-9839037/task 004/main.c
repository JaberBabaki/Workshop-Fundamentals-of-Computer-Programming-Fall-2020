#include <stdio.h>

int main() {
    int x1 = 3 , x2 = 12 , x3 = 67831 ;
    float x4 = 33.0 , x5 = 0.00 , x6 = 779892.2422 ;
    printf("%06d\t%6.3f\t\t%06d\n", x1 , x4 , x3);
    printf("%06d\t%6.3lf\t%.4f\n", x2 , x6 , x5);
    return 0;
}
