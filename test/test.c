#include "unity.h"
#include "phonebook.h"
#include <string.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "contact"
int b=0;
int valid=1;
int ok=1;
/* Prototypes for all the test functions */
void test_add_contact(void);
void test_delete_contact(void);
void test_exit(void);
void test_func_list(void);
void test_search_contact(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_contact);
  RUN_TEST(test_delete_contact);
  RUN_TEST(test_exit);
  RUN_TEST(test_func_list);
  RUN_TEST(test_search_contact);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_search_contact()
{
  TEST_ASSERT_EQUAL(1,Search_contact(1,"Milan"));
  TEST_ASSERT_EQUAL(0,Search_contact(1,"random"));

}

void test_mainmenu()
{
  TEST_ASSERT_EQUAL(1,MainMenu(1));
  TEST_ASSERT_EQUAL(2,MainMenu(2));
  TEST_ASSERT_EQUAL(3,MainMenu(3));
  TEST_ASSERT_EQUAL(4,MainMenu(4));
  TEST_ASSERT_EQUAL(5,MainMenu(5));
  TEST_ASSERT_EQUAL(6,MainMenu(6));
}
void reset_struct()
{
   p.age=12;
  strcpy(p.First_Name,"Mani");
  strcpy(p.Address,"andhrapradesh");
  strcpy(p.Contact_no,"8247519556");
  strcpy(p.Email,"pydimanigupta123@gmail.com");
  p.Gender='M';
  strcpy(p.Last_Name,"gupta");

}
void test_exit()
{
   TEST_ASSERT_EQUAL(1, exit(0));
}
void test_func_list()
{
  TEST_ASSERT_EQUAL(1,func_list(1));
}
void test_delete_contact()
{
  TEST_ASSERT_EQUAL(1, Delete_contact(1,"mani"));
  TEST_ASSERT_EQUAL(0,Delete_contact(1,"satya"));
}

/* Write all the test functions */ 
void test_add(void) {
  reset_struct();
  TEST_ASSERT_EQUAL(p.age, Add_contact(1));
  strcpy(p.First_Name,"M");
  TEST_ASSERT_EQUAL(1, Add_contact(1));
  strcpy(p.First_Name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, Add_contact(1));
  strcpy(p.First_Name,"M2M");
  TEST_ASSERT_EQUAL(2, Add_contact(1));
  reset_struct();
  strcpy(p.Last_Name,"M");
  TEST_ASSERT_EQUAL(3, Add_contact(1));
  strcpy(p.Last_Name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(3, Add_contact(1));
  strcpy(p.Last_Name,"M2M");
  TEST_ASSERT_EQUAL(4, Add_contact(1));
  reset_struct();
  p.Gender='H';
  TEST_ASSERT_EQUAL(5, Add_contact(1));
  reset_struct();
  strcpy(p.Address,"Mu");
  TEST_ASSERT_EQUAL(6, Add_contact(1));
  strcpy(p.Address,"Mummmmmmmmmmmmmmmmmmm");
  TEST_ASSERT_EQUAL(6, Add_contact(1));
  reset_struct();
  strcpy(p.Contact_no,"90040873");
  TEST_ASSERT_EQUAL(7, Add_contact(1));
  strcpy(p.Contact_no,"90040zz873");
  TEST_ASSERT_EQUAL(8, Add_contact(1));
  reset_struct();
  strcpy(p.Email,"mani");
  TEST_ASSERT_EQUAL(9, Add_contact(1));
  reset_struct();
  
}