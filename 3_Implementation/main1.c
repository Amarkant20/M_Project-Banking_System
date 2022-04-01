#include "function_for_bank.h"
#include "function_for_all_header.h"
#include "unity/unity.h"
#include "assert.h"
#include "function_for_doller.h"
#include "function_for_euro.h"
 void view(void)  
 {
  int choice;  
 printf("\n--------------------------------------------------------------------------------------------------------------------------------\n");
 printf("\n****************************************** WELCOME TO YOUR HDFC BANKING APPLICATION ********************************************\t");
 printf("\n--------------------------------------------------------------------------------------------------------------------------------\n");
 printf("\nPlease select your service which you want to use......\n");  
 printf("\n 1. For New Account opening  \n 2. For Already Existing customer \n 3. Exit \n");  
 printf("\n Please select your service:");
 scanf("%d",&choice);  
 switch (choice)  
   {
    case 1: newly_customer_for_opening_account_function();
    break;
    case 2: already_existing_customer_function();
    break;   
    default:  
    exit(0);  
  }  
 }

 void late(int i)
{   int m,l;
    for(m=0;m<i;m++)
         l=m;
}
void setUp()
{

}
void tearDown()
{

}
void testing_function_for_doller_exchange(void)
{
    int f1 = 500, f2 = 75;
    TEST_ASSERT_EQUAL(6.8, for_exchanging_rupees_to_doller_function(f1,f2));
    TEST_ASSERT_EQUAL(0.15, for_exchanging_rupees_to_doller_function(f2,f1));
    
}
void testing_function_for_euro_exchange(void)
{
    int l1 = 500, l2= 87;
    TEST_ASSERT_EQUAL(5.7, for_exchanging_rupees_to_euro_function(l1,l2));
    
    
}
 int main(void)
{   
     /*required by the unity test framework*/
    UNITY_BEGIN();
    /*required by the unity test framework*/
    RUN_TEST(testing_function_for_doller_exchange);
    RUN_TEST(testing_function_for_euro_exchange);
    /*required by the unity test framework*/
    UNITY_END();



    int mx;
    char p[10],pass[20]="amarlnt";
    int k=0;
    printf("\n\n\t\tPlease enter your password to login:");
    scanf("%s",p);
    

    if (strcmp(p,pass)==0)
        {printf("\n\nPassword Match!\nLOADING");
        for(k=0;k<=6;k++)
        {
            late(100000000);
            printf(".");
        }
                system("cls");
            view();
        }
    else
        {   printf("\n\nYou entered Wrong password!!\a\a\a");
            log_try:
            printf("\nEnter 1 to try again and 0 to exit the program:");
            scanf("%d",&mx);
            if (mx==1)
                    {

                        system("cls");
                        main();
                    }

            else if (mx==0)
                    {
                    system("cls");
                    }
            else
                    {printf("\nInvalid!");
                    late(1000000000);
                    system("cls");
                    goto log_try;}

        }
       
        return 0;
}
