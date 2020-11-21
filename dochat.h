#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define ESC 27
#define ENTER 13
void exit_info(void);//give the info about how to Exit..
void read_chat(char [],char []);//read all chat in the file..
void gotoxy(int,int);
void option_menu(void);
void setcolor(int);
void readi_chat(char [],char[]);
void do_chat(void);
void datei(char [],char []);
void mhbox(int,int,int,char);

void do_chat(void)
{
	//intro start from here...
	char urname[100],hername[100];

	int x=1;
	exit_info();
	ghaz:
	system("cls");

	gotoxy(40,12);
	setcolor(13);



	printf("Enter the Name : ");
	setcolor(19);
     gets(urname);

     if(strlen(urname)<2)
     {
     	system("cls");
     	gotoxy(40,12);
     	printf("Enter the correct name....");
     	getch();
     	goto ghaz;

	 }



     	system("cls");
     	Ghazipur:
	gotoxy(40,12);
	setcolor(82);
	printf("Enter the Second person's Name : ");



	setcolor(17);
     gets(hername);
     if(strlen(hername)<2)
        {
     	system("cls");
     	gotoxy(40,12);
     	printf("Enter the correct name....");
     	getch();
     	goto Ghazipur;

	 }

     /*---------------------------------------------------*/
     system("cls");
	 gotoxy(1,1);
	 setcolor(136);
     printf("%s",urname);
     gotoxy(80,1);
     setcolor(139);
     printf("%s",hername);
     datei(urname,hername);
     {
     	char doi[10000],did[100000];


     	for(;;)

     	{   ++x;

     		fflush(stdin);
     		if(doi[0]=='*'|| did[0]=='*')
     		{
     			system("cls");
     			option_menu();
			 }

			 setcolor(102);
			 gotoxy(20,x);
			 ++x;
			 gets(doi);
			 read_chat(urname,doi);

			 mhbox(20,(20+strlen(doi)),x,'-');
			 ++x;

			 setcolor(107);
			  gotoxy(60,x);
			  ++x;
			 gets(did);
			 	 readi_chat(hername,did);
			 mhbox(60,(60+strlen(did)),x,'-');




		 }



	 }



}

void exit_info(void)
{
	char ch;

	gh: poco:
		system("cls");
	gotoxy(13,5);
	setcolor(12);
	printf("At any time if you want to Exit Press only \'*\' on left side...");
	gotoxy(13,7);
	setcolor(122);
	printf("Press \'y\' To See The Demo.. (How To Exit)");
	gotoxy(13,9);
	setcolor(129);
	printf("Hit the \'Enter\' To Continue..");
	gotoxy(13,11);
	setcolor(127);
	printf("Prees \'ESC\' To <-- Back");
	ch=getch();


	if(ch==ESC)
	{
		system("cls");
	option_menu();


	}else if(ch==ENTER)
	{
		return ;

	}else if(ch=='y' || ch=='Y')
	{

		{
			system("cls");
			gotoxy(1,1);
			setcolor(101);
			printf("Himanshu Sharma");
			gotoxy(80,1);
			setcolor(102);
			printf("Himanshi Sharma");

			gotoxy(20,2);
			setcolor(145);
			printf("Hey Himanshi How Are You..");
			Sleep(1000);
				gotoxy(60,4);
			setcolor(146);
			printf("I am fine Himanshu..");
			Sleep(1000);
				gotoxy(20,6);
			setcolor(147);
			printf("Ok bye Himanshi !!!");
			Sleep(1000);
				gotoxy(60,8);
			setcolor(148);
			printf("*");
			Sleep(1000);
			goto poco;





		}

	}
	else
	{
		system("cls");
		goto gh;
	}









}
