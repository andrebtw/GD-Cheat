#include "header.h"

void player_menu(void)
{
	int loop = 1;
	char input[50];

	while (loop == 1)
	{
		system("cls");
		printf("Gameplay menu. Please select an option listed down below :\n\n");
		printf("1. Noclip\n");
		printf("2. Go back to main menu\n");
		printf("\n\n");
		printf("Choose : ");
		scanf("%s", input);

		if (input[0] == '1')
			noclip();
		if (input[0] == '2')
			loop = 0;
	}
}

void stats_menu(void)
{
	int loop = 1;
	char input[50];

	while (loop == 1)
	{
		system("cls");
		printf("Stats menu. Please select an option listed down below :\n\n");
		printf("1. Likes\n");
		printf("2. Go back to main menu\n");
		printf("\n\n");
		printf("Choose : ");
		scanf("%s", input);

		if (input[0] == '1')
			likes();
		if (input[0] == '2')
			loop = 0;
	}
}

void main_menu(void)
{
	int loop = 1;
	char input[50];

	while (loop == 1)
	{
		system("cls");
		printf("Welcome to the cheat. Please select an option listed down below :\n\n");
		printf("1. Player\n");
		printf("2. Stats\n");
		printf("3. Exit\n");
		printf("\n\n");
		printf("Choose : ");
		scanf("%s", input);

		if (input[0] == '1')
			player_menu();
		if (input[0] == '2')
			stats_menu();
		if (input[0] == '3')
			loop = 0;
	}
}
