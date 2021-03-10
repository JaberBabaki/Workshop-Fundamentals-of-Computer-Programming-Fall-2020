//
// Created by jaberALU on ۱۸/۰۱/۲۰۲۱.
//
#include <stdio.h>
#include <malloc.h>
#include <mem.h>

struct Node {
    int index;
    char name[50];
    char family[50];
    int id;
    struct Node *next;
} *head;
void createNode(struct Node *n, char *name, char *family, int mark, struct Node *newNode);
void printList(struct Node *n);
void readFile();
int main(){

    //struct Node *head = (struct Node *) malloc(sizeof(struct Node));
    //struct Node *second = (struct Node *) malloc(sizeof(struct Node));

    //createNode(head,"jaber","babaki",12,second);
    //createNode(second,"hamed","amiri",20,NULL);

    readFile();

    printList(head);

    return 0;
}
void createNode(struct Node *n, char *name, char *family, int mark, struct Node *newNode) {
    strcpy(n->name,name);
    strcpy(n->family,family);
    n->id = mark;
    n->next = newNode;
}
void printList(struct Node *n) {
    while (n != NULL) {
        printf(" %d \n", n->index);
        printf(" %s \n", n->name);
        printf(" %s \n", n->family);
        printf(" %d \n", n->id);
        printf("\n");
        n = n->next;
    }
}

void readFile(){
    FILE *fp = fopen("test3.csv", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    char parsedLine[100];
    fgets(parsedLine, 100, fp);

    int i=0;
    while ((fgets(parsedLine, 100, fp)) != NULL) {
        struct Node *node = malloc(sizeof(struct Node));
        node->index=i;
        int id = atoi(strtok(parsedLine, ","));
        node->id=id;
        char *getFirstname = strtok(NULL, ",");
        strcpy(node->name, getFirstname);
        char *getLasttname = strtok(NULL, ",");
        strcpy(node->family, getLasttname);

        node->next=head;
        head=node;

        i++;
        //printf("%s",parsedLine);


    }

}