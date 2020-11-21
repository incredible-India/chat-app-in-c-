#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void gotoxy(int,int);
void setcolor(int);
void option_menu(void);

void chat_Ai(void)
{
	extern int i,j;
	char ch[1000],c[1000],name[50];
	SetConsoleTitle("Talk with Robo..");
	SYSTEMTIME k;
	GetSystemTime(&k);
	system("cls");
	gotoxy(40,12);
	setcolor(78);
	printf("Name : ");
	setcolor(110);
	gets(name);
	system("cls");
	gotoxy(25,3);
	setcolor(26);
	printf("Hello ! %s How are you..",strupr(name));
	gotoxy(55,5);
	setcolor(141);
	gets(c);
		gotoxy(25,7);
	setcolor(26);
	printf("Ohh! That's Great..");
		gotoxy(25,9);
	setcolor(26);
	printf("Do you want to know what is date today..!!");
		gotoxy(55,11);
	setcolor(141);
	gets(c);
			gotoxy(25,13);
	setcolor(26);
	printf("If u say No still i will tell you..");
 		gotoxy(25,15);
	setcolor(26);
	printf("Today's date is %d/%d/%d",k.wDay,k.wMonth,k.wYear);	
	
	gotoxy(25,17);
	setcolor(26);
	printf("Do You have Any Girlfriend..?");
			gotoxy(55,19);
	setcolor(141);
	gets(c);	
		gotoxy(25,21);
	setcolor(26);
	printf("This is too good...");
			gotoxy(25,23);
	setcolor(26);
	printf("You know my creater Himanshu Sharma he is");
				gotoxy(25,24);
	setcolor(26);
	printf("everything for me..He is cool :)");
		gotoxy(25,26);
	setcolor(26);
	printf("Ok Sir now its time to go !!");
		gotoxy(25,27);
	setcolor(26);
	printf("You are a good person..");
		gotoxy(25,28);
	setcolor(26);
	printf("Tatta baye bayeeee...");
	
	getch();
	system("cls");
	option_menu();
	
	
	
	
	
}
