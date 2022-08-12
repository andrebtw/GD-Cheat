#include "header.h"

void likes(void)
{
    int likes;
    char input[200];
    system("cls");
    printf("Please select the amount of likes : \n\n\n");
    printf("Choose : ");
    scanf("%s", input);

    likes = atoi(input);
    WriteProcessMemory(handle, (LPVOID)0x107C7730, &likes, sizeof(likes), 0);

    system("cls");
    printf("The level now has got %d likes.\n\n", likes);
    system("pause");
}
