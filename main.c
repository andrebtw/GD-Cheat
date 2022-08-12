#include "header.h"

HWND hwnd;
DWORD procID;
HANDLE handle;

int	main(void)
{
	hwnd = FindWindowA(NULL, "Geometry Dash");
	system("title Geometry Dash Cheat - By andrebtw.");
	system("color 0a");

	if (hwnd == NULL)
	{
		printf("Please make sure to have Geometry Dash opened...\n\n");
		system("pause");
		return (1);
	}
	printf("Geometry Dash has been found");
	
	GetWindowThreadProcessId(hwnd, &procID);
	handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
	
	if (procID == 0)
	{
		printf("Cannot open Geometry Dash...\n\n");
		system("pause");
		return (1);
	}
	main_menu();
	//int Value = 45;
	//WriteProcessMemory(handle, (LPVOID)0x107C7730, &Value, sizeof(Value), 0);
	return (0);
}
