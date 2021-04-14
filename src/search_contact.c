#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"

int Search_contact(int read, char temp[])
{
	char name[20];
	system("cls");
	FILE *k;
	k=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search contact !!!!!!!!!!!!!\n");
	
	printf("\n Enter  Name to be viewed:");
	if(read==0)
	{
	scanf("%s",name);}
	else{
		strcpy(name,temp);
	}
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(k,"%s %s %c %i %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email)!=EOF)
	{
		if(strcmp(p.First_Name,name)==0)
		{
			
			printf("%s %s",p.First_Name, p.Last_Name);
			
			printf("%c",p.Gender);
			
			printf("%i",p.age);
			
			printf("%s",p.Address);
			
			printf("%s",p.Contact_no);
			
			printf("%s",p.Email);
		
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {
		
		printf("Record not found!");
		return 0;
	   }
	fclose(k);
	return 1;
}