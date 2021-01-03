#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Enter 2 Num: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Num1 \tNum2 \tResult \n");
    printf("%4d\t%4d\t%6d",x,y,x+y);

    return 0;
}