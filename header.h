#ifndef HEADER_H
#define HEADER_H

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

extern HWND hwnd;
extern DWORD procID;
extern HANDLE handle;

void main_menu(void);
void player_menu(void);
void stats_menu(void);
void likes(void);
void noclip(void);

#endif