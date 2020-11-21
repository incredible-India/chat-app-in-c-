#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void gotoxy(int,int);
void setcolor(int);
void mhbox(int ,int ,int ,char );//for the horizontal borders
void mvbox(int ,int ,int ,char );//for the vertical border
void welcome(void)
{
  gotoxy(40,12);
  setcolor(18);
  printf("Welcome TO The Private And Secure  ");
  setcolor(56);
  	gotoxy(75,12);
  	printf("Chat_Room");
  	Sleep(900);

  	  gotoxy(40,12);
  setcolor(28);
  printf("Welcome TO The Private And Secure  ");
	 setcolor(14);
  	gotoxy(75,12);
  	printf("Chat_Room");
  		Sleep(900);
	system("cls");

	 gotoxy(26,14);
  setcolor(30);
  printf("Feel Free To Chat With Your Lovers..  ");

  	Sleep(900);
  	gotoxy(26,14);
  setcolor(25);
  printf("Feel Free To Chat With Your Lovers..  ");
  Sleep(900);
  system("cls");
  mhbox(30,70,12,'*');
  mhbox(30,70,14,'*');
    gotoxy(40,13);
    setcolor(90);
	printf(".....Let's Start.....");
	Sleep(1000);
	    gotoxy(40,13);
    setcolor(110);
	printf(".....Let's Start.....");


}

void mhbox(int a,int b,int c,char d)
{

	extern int i;
	for(i=a;i<=b;i++)
	{
		gotoxy(i,c);
		printf("%c",d);
	}


}
void mvbox(int a,int b,int c,char d)
{

	extern int j;

	for(j=a;j<=b;j++)
	{
       gotoxy(c,j);
       printf("%c",d);
	}

}
