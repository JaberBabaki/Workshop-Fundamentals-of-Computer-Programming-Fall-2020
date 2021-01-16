#include <stdio.h>

int main() {
    int k=5,m=8;
    int *ptr=&k;
    int **ptr2=&ptr;
    **ptr2=12;
    *ptr2=&m;

    printf("%d\n",&k);
    printf("%d\n",k);
    printf("%d\n",&m);
    printf("%d\n",**ptr2);
    printf("%d\n",*ptr2);

    return 0;
}
