//
// Created by jaberALU on ۱۱/۰۱/۲۰۲۱.
//
#include <stdio.h>

struct student_record{
    char name[20];
    int id;
    int age;
    int mark;
};

struct class_record{
    char tname[20];
    struct student_record students[2];
    int mark[2];
    int avg;
};

int main() {
    printf("Hello, World!\n");

    struct calss_record classes[2];
    for(int i=0;i<2;i++){
        printf("\n enter class-%d tecaher name =",i);
        scanf("%s",&classes[i].tname);
        for(int j=0;j<2;j++){
            scanf("%s",&classes[i].students[j].name);
            //..
        }
    }
    return 0;
}

