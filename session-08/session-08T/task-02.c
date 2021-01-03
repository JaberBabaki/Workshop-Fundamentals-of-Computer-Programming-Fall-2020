//
// Created by jaberALU on ۲۸/۱۲/۲۰۲۰.
//
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int m,n,p,q;
    scanf("%d-%d %d-%d",&m,&n,&p,&q);
    if(n!=p){
        printf("can not multiplying matrix");
        return 0;
    }
    int number;
    int M1[m][n],M2[p][q],R[m][q];

    M1[0][0]=1; M1[0][1]=2; M1[0][2]=3;
    M1[1][0]=4; M1[1][1]=5; M1[1][2]=6;


    M2[0][0]=7; M2[0][1]=8;
    M2[1][0]=9;M2[1][1]=10;
    M2[2][0]=11;M2[2][1]=12;

/*    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&number);
            M1[i][j]=number;
        }
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&number);
            M2[i][j]=number;
        }
    }*/

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            R[i][j]=0;
            for(int k=0;k<p;k++){
                R[i][j]=R[i][j]+(M1[i][k]*M2[k][j]);
            }

        }
    }



    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",M1[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",M2[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",R[i][j]);
        }
        printf("\n");
    }
    return 0;
}

