void gotoxy(int,int);
void setcolor(int);
void chat_Ai(void);//to chat with scripted terms define in chat.h and called in option_menu..
void get_help(void);//get the help discription function, called in option_menu..
#include<stdio.h>
#include<windows.h>
#include<conio.h>
void mhbox(int,int,int,char);
#define ESC 27// define Esacpe Button always works for closing the execution of programme..
void do_chat(void);//this for chatting purpose .....


void option_menu(void)
{
  extern int i,j;
  char ch;
  read:
  system("cls");
  
  gotoxy(10,12);
  setcolor(110);
  printf("1 : Start Chat");
  
  gotoxy(40,12);
  setcolor(110);
  printf("2 : Chat to AI");
  
   gotoxy(70,12);
  setcolor(110);
  printf("3 : Get Help");
  
  setcolor(97);
  mhbox(40,54,19,'*');
  
   mhbox(40,54,21,'*');
   
   gotoxy(42,20);
   setcolor(42);
   printf("Esc : ");
   gotoxy(47,20);
   setcolor(44);
   printf(" Exit");
  
  
  ch=getch();
  
  if(ch==27)
  {
  
  	system("cls");
    system("color 76");  	
  	gotoxy(40,12);
  	printf("THANX FOR VISITING US");
  	Sleep(1);
  	exit(0);
  	
  	
  	
  }else if(ch=='1')
  {
    do_chat();
  }else if(ch=='2')
  {
  	chat_Ai();
  	
  }else if(ch=='3')
  {
  	get_help();
  	
  }else 
  {
  	
  	printf("\a");
  	goto read;
  	
  }
  
  

	
}

