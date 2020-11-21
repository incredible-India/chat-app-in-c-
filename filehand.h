#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy(int,int);
void datei(char [],char[]);
void read_chat(char [],char []);//read all the chat without permission..
void setcolor(int);
void readi_chat(char [],char []);

void option_menu();
void get_help(void)
{
	FILE *p;
	p=fopen("HELP.txt","r");
	char ch[1000];
	system("cls");
	if(p==NULL)
	{
		
		system("cls");
		gotoxy(40,12);
		setcolor(45);
		printf("File Not Found");
		getch();
		option_menu();
		
	}
	else{
	
	
	while(fgets(ch,100,p)!=NULL)
	{
	puts(ch);
		
	}
	fclose(p);
	getch();
	
	option_menu();
}
	
	
}
void datei(char name[],char hername[])
{
	extern int i,j;
		FILE *p;
	p=fopen("common file.txt","a");
	SYSTEMTIME t;
	GetSystemTime(&t);
	fprintf(p,"\n");
	    for(i=0;i<=20;i++)
	fprintf(p,"/");
	fprintf(p,"       \n Date : %d / %d / %d \n",t.wDay,t.wMonth,t.wYear);
		for(j=0;j<=20;j++)
	fprintf(p,"/");	
	fprintf(p,"\n");
	fprintf(p,"\n NAME : %s",name);
	
	fprintf(p,"\n Chat With : %s",hername);
		fprintf(p,"\n\t,,,,,,,,Start Chat,,,,,,,,,,,,,,,\n");

}

void read_chat(char name[],char chat[])
{
	extern int i,j;
	FILE *p;
	p=fopen("common file.txt","a");
	
	fprintf(p,"\n %s : %s ",name,chat);
	

	
	fprintf(p,"\n");
	
	
	
	
}

void readi_chat(char hername[],char chat[])
{
	extern int i,j;
	FILE *p;
	p=fopen("common file.txt","a");

	fprintf(p,"\n %s : %s ",hername,chat);
	

	
	fprintf(p,"\n");
	
	
	
	
}
