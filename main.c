#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include"welcome.h"
#include"filehand.h"
#include"dochat.h"//coding of two person start from here
#include"menu.h"
#include"chat.h"
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void setcolor(int);//this is the color* change function
void gotoxy(int,int);//for the gotoxy function for console window
void welcome(void);//the is the welcome window blink text will appear here in main function
void option_menu(void);//this is for the given option after intro define menu.h in main function
int i,j;
int main(int argc, char *argv[]) {
	
	void (*p) (void);
	p=welcome;
	p();
     option_menu();
	getch();
	return 0;
}


void setcolor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void gotoxy(int a,int b)
{

COORD x;
x.X=a;
x.Y=b;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);



}
