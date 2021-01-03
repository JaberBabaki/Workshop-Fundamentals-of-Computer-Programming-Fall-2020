#include <stdio.h>
int main()
{
    int U1,U2,UT;
    int F1,F2,FT;
    int c;
    U1=rand() % 10;
    U2=rand() % 10;
    F2=rand() % 10;
    F1=rand() % 10;
    UT=U1+U2;
    FT=F1+F2;
    printf("Your Num. Are %d & %d .",U1,U2);
    printf("And Father Num. Is %d .",F1);
    printf("Do you want to continue?(Yes=1 , No=0): ");
    scanf("%d",&c);
    while (c=1)
    {
        U1=rand() % 10;
        U2=rand() % 10;
        F2=rand() % 10;
        F1=rand() % 10;
        UT+=U1+U2;
        FT+=F1+F2;
        printf("Your Num. Are %d & %d .",U1,U2);
        printf("And Father Num. Is %d .",F1);
        if (UT>21)
        {
            printf("You are lose./nGame Over");
            c=0;
        }
        else
        {
            printf("Do you want to continue?(Yes=1 , No=0): ");
            scanf("%d",&c);
        }
        
        
    }
    

}