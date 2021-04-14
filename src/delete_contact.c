//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"

int delete_contact(int read, char temp[])
{
	char name[20];
	int found=0;
	system("cls");
	FILE *k, *ft;
	ft=fopen("temp_file2.dat","w+");
	k=fopen("project.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Patients Record !!!!!!!!!!!!!\n");

	printf("\n Enter contact name: ");
	fflush(stdin);
	if(read==0)
	{
	scanf("%s",name);
	name[0]=toupper(name[0]);
	}
	else
	{
		strcpy(name,temp);
	}
	
	
	while (fscanf(k,"%s %s %c %i %s %s %s", p.First_Name, p.Last_Name, &p.Gender,
			 &p.age, p.Address, p.Contact_no, p.Email)!=EOF)
	{
		if (strcmp(p.First_Name,name)!=0)
		fprintf(ft,"%s %s %c %i %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email);
		else 
		{
			printf("%s %s %c %i %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t contact not found....");
	
		return 0;
		
	}
	else
	{
		fclose(k);
		fclose(ft);
		remove("project.dat");
		rename("temp_file2.dat","project.dat");
		printf("\n\n\t\t\t contact deleted  ");
		
		return 1;
	
	}
}