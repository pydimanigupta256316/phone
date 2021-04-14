//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include"phonebook.h"
void login(void)//function for login screen
{
//list of variables	
int t=0	;
char Password[15];
char org_Password[15]="mani";
do
{
	printf("\n\n\n\n\t\t\t\tEnter Password :)");
	scanf("%s",&Password);
	
	if (strcmp(Password,org_Password)==0)
	{
		printf("\n\n\n\t\t\t\t\t...Login Successfull...");
		
		
			MainMenu(0);//call MainMenu function
		break;
	}
	else
	{
		printf("\n\t\t\tPassword in incorrect:( Try Again :)");
		t++;
		
	}

}
while(t<=3);
	if(t>3)
	{
	printf("%d",t);
	printf("You have cross the limit. You cannot login.");
	
    exit(0);
	}
 
system("cls");
}
