#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

#define init_cake_num 40
#define init_cookie_num 30
#define init_coffee_num 28
#define init_bill 0
#define first_discount_code "yalda99"
#define second_discount_code "daneshjoo99"


/* global variable declaration */
int choice;
int bill=init_bill;

void menu(int cake, int cookie, int coffee) {
    printf("What do you want to order?\n");
    printf("1) cake    $5 : %d\n", cake);
    printf("2) cookie  $8 : %d\n", cookie);
    printf("3) coffee  $15 : %d\n", coffee);
    printf("5) finish order\n");
}

void buy() {
    scanf("%d", &choice);

    /* local variable declaration */
    int pic = 0;

    /* static variable declaration */
    static int cake = init_cake_num;
    static int cookie = init_cookie_num;
    static int coffee = init_coffee_num;
    static int ord_cake =0;
    static int ord_cookie = 0;
    static int ord_coffee = 0;

    switch (choice) {
        case 1:
            cake--;
            ord_cake++;
            bill+=5;
            menu(cake, cookie, coffee);
            break;
        case 2:
            cookie--;
            ord_cookie++;
            bill+=8;
            menu(cake, cookie, coffee);
            break;
        case 3:
            coffee--;
            ord_coffee++;
            bill+=15;
            menu(cake, cookie, coffee);
            break;
        case 5:
            system("cls");
            printf("you have ordered %d cake , %d cookie and %d coffee\n",ord_cake,ord_cookie,ord_coffee);
            printf("the bill is $%d\n",bill);
            printf("in this coffee shop we give you free picture\n");
            printf("Do you want to take a picture?\n1) yes\n2) no\n");
            int a;
            scanf("%d", &a);
            if (a == 1)
                pic++;
            printf("picture = %d\n",pic);
            break;
        default:
            printf("Sorry there is no such option in the menu. Please try again.\n");
            return;
    }

}

void pay(void)
{
    printf("do you have discount code?\n");
    printf("1) yes 2) no\n");
    int a;
    scanf("%d",&a);
    printf("%d",a);
    if (a==1)
    {
      char b[15];
      printf("enter the code please\n");
      scanf("%s",b);
      if (strcmp(first_discount_code,b)==0)
      {
        printf("you have 25 percent discount!\n");
        bill=bill*0.75;
        printf("the new bill is $%d\n",bill);
      }
      else if (strcmp(second_discount_code,b)==0)
      {
        printf("you have 15 percent discount!\n");
        bill=bill*(85.0/100);
        printf("the new bill is $%d\n",bill);
      }
      else
      {
          printf("wrong code\n");
      }
    }
}

int main() {

    menu(init_cake_num, init_cookie_num, init_coffee_num);

    while(choice != 5)
        buy();

    pay();
    printf("wish to see you soon!");

    return 0;
}
