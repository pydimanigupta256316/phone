//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"
int mainmenu(int read)//function decleration
{
	struct contact t;
	t.age=50;
	system("cls");
	int choose;
	printf("\t\t\t\t\t\twelcome to phonebook\t\t\t\t\n");
	printf("\n\n\n\n\n\t\t\t\t1. Add contact\n");
	printf("\n\t\t\t\t2. List contact\n");
	printf("\n\t\t\t\t3. Search contact\n");
	printf("\n\t\t\t\t4. Edit contact\n");
	printf("\n\t\t\t\t5. Delete contact\n");
	printf("\n\t\t\t\t6. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 6:");
	if(read==0)
	{
	scanf("%i", &choose);
	}
	else{
		choose=read;
	}
	
	switch(choose)//switch to differeht case
	{
	
	case 1:
	Add_contact(0);//Add_rec function is called
    	return 1;
    case 2:
    	func_list(0);
    	return 2;
	case 3:
	Search_contact(0,"");//View_rec function is call
    	return 3;
	case 4:
		Edit_contact(0,"");//Edit_rec function is call
		return 4;
	case 5:
		Dlt_contact(0,"");//Dlt_rec function is call
		return 5;
	case 6:
		ex_it(0);//ex_it function is call
    	return 6;


	default:
		printf("\t\t\tInvalid entry. Please enter right option ");
		
		return 0;
	}//end of switch
	return 1;
		
	
}