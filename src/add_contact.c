//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"
int add_contact(int read)
{  system("cls");
	//list of variables
	char ans;


	FILE*k;//file pointer
	k=fopen("project.dat","a");//open file in write mode
	printf("\n\n\t\t\tAdd contact\n");
	
	/* **************************First Name*********************************** */

	printf("\n\t\t\tFirst Name: ");
	if(read==0)
	{
	scanf("%s",p.First_Name);
	}
	p.First_Name[0]=toupper(p.First_Name[0]);
	if(strlen(p.First_Name)>20||strlen(p.First_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		return 1;
	}
	else
	{
		for (b=0;b<strlen(p.First_Name);b++)
		{
			if (isalpha(p.First_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			return 2;
		}
	}
	
	/* ********************************************** Last name ************************************************ */

	printf("\n\t\t\tLast Name: ");
	if(read==0)
	{
    scanf("%s",p.Last_Name);
	}
    p.Last_Name[0]=toupper(p.Last_Name[0]);
    if(strlen(p.Last_Name)>20||strlen(p.Last_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
		return 3;
	}
	else
	{
		for (b=0;b<strlen(p.Last_Name);b++)
		{
			if (isalpha(p.Last_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Last name contain Invalid character :(  Enter again :)");
			return 4;
		}
	}
/* ******************************************* Gender ************************************************************** */	    
	do
	{
	    printf("\n\t\t\tGender[F/M]: ");
		if(read==0)
		{
		scanf(" %c",&p.Gender);
		}
		if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
			return 5;
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
	if(read==0)
	{
    scanf(" %i",&p.age);
	}
/* **************************************** Address ******************************************************************* */    
    do
    {
    
    printf("\n\t\t\tAddress: ");
	if(read==0)
	{
    scanf("%s",p.Address);
	}
    p.Address[0]=toupper(p.Address[0]);
    if(strlen(p.Address)>20||strlen(p.Address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		return 6;
	}
	
}while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	
    printf("\n\t\t\tContact no: ");
	if(read==0)
	{
    scanf("%s",p.Contact_no);
	}
    if(strlen(p.Contact_no)>10||strlen(p.Contact_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		return 7;
	}
	else
	{
		for (b=0;b<strlen(p.Contact_no);b++)
		{
			if (!isalpha(p.Contact_no[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			return 8;
		}
	}
}while(!valid);

    fprintf(k," %s %s %c %i %s %s %s \n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email);
    printf("\n\n\t\t\t.... contact saved  ...");
    fclose(k);//k file is closed
	return p.age;
    
}