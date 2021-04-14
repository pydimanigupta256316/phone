//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"
int func_list(int useless)
{
	int row;
	system("cls");
	Title();
	FILE *k;
	k=fopen("project.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List contact details !!!!!!!!!!!!!\n");

		row=17;
		while(fscanf(k,"%s %s %c %i %s %s %s \n", p.First_Name, p.Last_Name, 
					&p.Gender, &p.age, p.Address, p.Contact_no, p.Email)!=EOF)
		{
		
			printf("%s %s ",p.First_Name, p.Last_Name);
		
			printf("%c ",p.Gender);
			
			printf("%i ",p.age);
		
			printf("%s ",p.Address);
			
			printf("%s ",p.Contact_no);
		
			printf("%s ",p.Email);
			
			row++;
		}
		fclose(k);
	
		return 1;
}