 /**
 * @file newly_customer_for_opening_account_function.c
 * @author Amar Kant sonkar
 * @brief 
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include "function_for_bank.h"
 #include  "function_for_all_header.h"

void newly_customer_for_opening_account_function()
{ 
      FILE*fb;  
      fb=fopen("cust_det.txt","a");  
      printf("\n***************************** Welcome to YOUR in HDFC Banking ************************************\n");
      printf("\n*********************************** (FOR ACCOUNT OPENING) ****************************************\n");
      printf("\n--------------------------------------------------------------------------------------------------\n");
      printf("\n Please enter your name:");  
      scanf("%s",&bk.n);  
      printf("\n Welcome %s, Plz enter your account number:",bk.n);  
      scanf("%d",&bk.ano);  
      printf("\n Plz enter your deposit amount... Rs:");  
      scanf("%f",&bk.balance);  
      printf("\n Congratulations... Your account has been created.\nTo deposit please login as Already existing customer...\n");
      printf("\n Thank you so much");  
      fwrite(&bk,sizeof(bk),1,fb);  
      fclose(fb);  
      getch();  
}


      