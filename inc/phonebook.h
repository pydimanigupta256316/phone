/**
 * @file phonebook.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _phonebook_
#define _phonebook_
extern char ans; 
extern int ok;
extern int b, valid;

//functiondeclaration
void login(void);
int mainmenu(int read);
int add_contact(int read);
int func_list(int temp);
int search_contact(int read,char temp[]);
int modify_contact(int read,char temp[]);
int delete_contact(int read,char temp[]);
int exit(int temp);

struct contact//list of global variable
{
	int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20]; 
	char Contact_no[15];
	char Address[30];
	char Email[30];
};

struct contact  p,temp_c;


#endif  /* #define __phonebook__ */