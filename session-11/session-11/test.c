#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *newNode(int data) {
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void addFront(struct Node **head, int data) {
    struct Node *new_node = newNode(data);
    new_node->next = *head;
    *head = new_node;
}


void pushBack(struct Node **head, int data) {
    if (*head == NULL) {
        *head = newNode(data);
        return;
    }
    struct Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode(data);
}

void PrintNodes(struct Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


int main() {



    /*struct Node *head1 = NULL;
    int n;
    scanf("%d", &n);
    while (n != -1) {
        pushBack(&head1, n);
        scanf("%d", &n);
    }
    // PrintNodes(head1);
    struct Node *head2 = NULL;
    int m;
    scanf("%d", &m);
    while (m != -1) {
        pushBack(&head2, m);
        scanf("%d", &m);
    }
    //PrintNodes(head2);

    struct Node *ptr = NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data >= head2->data) {
            ptr = head1;
            head1 = ptr->next;

            pushBack(&ptr, ptr->data);
                if (*head == NULL) {
        *head = newNode(data);
        return;
    }
    struct Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode(data);
        }

        else if (head2->data >= head1->data) {
            ptr = head2;
            head2 = ptr->next;
            pushBack(&ptr, ptr->data);
        }


        if (head1 == NULL) {
            ptr->next = head2;
        }


        if (head2 == NULL) {
            ptr->next = head1;
        }
    }

    PrintNodes(ptr);*/

    return 0;


}