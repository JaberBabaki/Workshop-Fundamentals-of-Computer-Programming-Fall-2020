#include <stdio.h>
#include <stdlib.h>
struct student_record
{
    char name[50];
    int age;
    int mark;
};
int main() {

/*    struct student_record st;
    int n,output;
    FILE *fp=fopen("test4.txt", "wb");;
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d \n", i + 1);

        fflush(stdin);

        printf("Name: ");
        gets(st.name);

        printf("Age: ");
        scanf("%d", &st.age);

        printf("Mark: ");
        scanf("%d", &st.mark);

        output = fwrite(&st, sizeof(st), 1, fp);
        printf("Number of items written to the file: %d\n", output);
    }
    fclose(fp);*/

    struct student_record st;
    FILE *fp= fopen("test4.txt", "rb");;

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while( fread(&st, sizeof(st), 1, fp) == 1 )
    {
        printf("Name: %s \n", st.name);
        printf("Age: %d \n", st.age);
        printf("Mark: %d \n\n", st.mark);
    }

    fclose(fp);



    /*printf("Hello, World!\n");
    FILE *fp =fopen("test1.txt","w");
    char *str="//jaber-babaki";
    fwrite(str,sizeof(char),115,fp);
    fclose(fp);*/

    /*int intVar = 23;
    FILE* f = fopen("test2.txt", "w");
    fprintf(f, "%d", intVar);*/

    /*FILE *stream= fopen("test1.txt", "r");
    char val;
    fread(&val, sizeof(char), 1, stream);
    printf("Data read from file: %c \n", val);*/

/*    char buffer[20]=""; // Buffer to store data
    FILE *stream= fopen("test1.txt", "r");
    int count = fread(&buffer, sizeof(char), 20, stream);
    printf("Data read from file: %s \n", buffer);
    printf("Elements read: %d", count);
    fclose(stream);*/

   /* FILE *fptr=fopen( "test3.txt" , "w" );
    if( fptr == NULL)
    {
        printf( "Error" );
        exit(1);
    }

    char name[50];
    int mark,n;

    printf( "Enter the number of Students: " );
    scanf( "%d",&n );

    for(int  i=0 ; i<n ; i++ )
    {
        printf( "For student %d Enter Name: " ,i+1 );
        scanf( "%s",name );
        printf( "Enter mark: " );
        scanf( "%d" , &mark);
        fprintf( fptr, "Name: %s\t Mark: %d \n" ,name,mark);
    }

    fclose(fptr);*/

/*    FILE *fptr=fopen( "test3.txt" , "r" );
    if( fptr == NULL)
    {
        printf( "Error" );
        exit(1);
    }
    char name[50];
    int mark,n;

    printf("Name:\t\tMark\n");

    while(fscanf(fptr, "Name: %s\t\tMark: %d\n", name, &mark) !=EOF){
        printf("%s\t\t%d\n", name,mark);
    };*/

    return 0;
}
