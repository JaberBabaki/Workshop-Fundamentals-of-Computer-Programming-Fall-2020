#include <stdio.h>
#include <windows.h>
#include <time.h>

int main() {
	int goal;
	int player_choice, bot_choice;
	int player_score = 0, bot_score = 0;

	printf("Enter the Goal:\n");
	scanf("%d", &goal);
	
	while (player_score < goal && bot_score < goal) {
		//print the scores at the top of the window
		printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);

		//get player choice
		printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n");
		scanf("%d", &player_choice);

		//make a random choice for the computer
		srand(time(NULL));
		bot_choice = rand() % 3 + 1;

		if (player_choice == 1 && bot_choice == 3) {
			player_score++;
			printf("Rock Breaks Scissors.\nYou win!");
		}
		else if (player_choice == 3 && bot_choice == 1) {
			bot_score++;
			printf("Rock Breaks Scissors.\nBot wins!");
		}
		else if (player_choice == 2 && bot_choice == 1) {
			player_score++;
			printf("Paper Covers Rock.\nYou win!");
		}
		else if (player_choice == 1 && bot_choice == 2) {
			bot_score++;
			printf("Paper Covers Rock.\nBot wins!");
		}
		else if (player_choice == 3 && bot_choice == 2) {
			player_score++;
			printf("Scissors Cut Paper.\nYou win!");
		}
		else if (player_choice == 2 && bot_choice == 3) {
			bot_score++;
			printf("Scissors Cut Paper.\nBot wins!");
		}
		else
			printf("You choose same...No one wins!");

		//clear the console
		Sleep(3000);
		system("cls");
	}

	//print final result
	printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);
	if (player_score == goal)
		printf("The End.You reach the goal...!!!\n");
	else
		printf("The End.The bot reaches the goal...!!!\n");
}