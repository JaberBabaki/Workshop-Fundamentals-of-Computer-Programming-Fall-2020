//
// Created by forna on 12/7/2020.
//
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main() {
    int goal;
    int player_choice, bot_choice;
    int player_score = 0, bot_score = 0;

    printf("Enter the Goal:\n");
    scanf("%d", &goal);

    while (player_score < goal && bot_score < goal) {
        //print the scores at the top of the window
        printf("\nYour score : %d\t\tBot score : %d\n\n", player_score, bot_score);

        //get player choice
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n");
        scanf("%d", &player_choice);

        //make a random choice for the computer
        srand(time(NULL));
        bot_choice = rand() % 3 + 1;

        if (bot_choice == 1 && player_choice == 1) {
            printf("rocks are friends of each other!");
        } else if (bot_choice == 1 && player_choice == 2) {
            printf("paper catches rock! you win!");
            player_score++;

        } else if (bot_choice == 1 && player_choice == 3) {
            printf("rock destroys scissors! you lose!");
            bot_score++;

        } else if (bot_choice == 2 && player_choice == 1) {
            printf("paper catches rock! you lose!");
            bot_score++;

        } else if (bot_choice == 2 && player_choice == 2) {
            printf("papers are friends of each other!");
        } else if (bot_choice == 2 && player_choice == 3) {
            printf("scissors cuts paper! you win!");
            player_score++;

        } else if (bot_choice == 3 && player_choice == 1) {
            printf("rock destroys scissors! you win!");
            player_score++;

        } else if (bot_choice == 3 && player_choice == 2) {
            printf("scissors cuts paper! you lose!");
            bot_score++;
        } else if (bot_choice == 3 && player_choice == 3) {
            printf("scissors are friends of each other!");
        }





        //clear the console
        Sleep(2000);
        printf("\033c");


    }

    //print final result
    printf("Your final score : %d\t\tBot's final score : %d\n\n", player_score, bot_score);

    // Check who is the winner and congrats him/her/it!!
    if (player_score > bot_score)
        printf("congratulations! you won!!  ");
    else
        printf("you lost. maybe next time!");


    return 0;
}
