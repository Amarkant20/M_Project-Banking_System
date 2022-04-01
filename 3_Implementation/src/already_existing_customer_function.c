/** 
 * @file already_existing_customer_function.c
 * @author Amar Kant Sonkar
 * @brief 
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include  "function_for_bank.h"
#include  "function_for_all_header.h"

void already_existing_customer_function()
{       
  int n,ct=0,n1,choice,fg;  
  int m,p,o;  
  float ano,val,tp;  
  FILE *f;  
    
   printf("\n*********************************** WELCOME TO YOUR BANK(HDFC)*************************************\n");
   printf("\n******************************** (FOR ALREADY EXISTING CUSTOMER) **********************************\n");
   printf("\n---------------------------------------------------------------------------------------------------\n"); 
   printf("\n\n Please enter your account number:");  
   scanf("%d",&n);  
   f=fopen("cust_det.txt","r+");  
   rewind(f);  
   while(!feof(f)&&ct==0)  
  { fread(&bk,sizeof(bk),1,f);  
   if (bk.ano==n)  
   {  ct=1;  }   }  
   if(ct==0)  
   {     printf("\n You enter wrong account number... \n No such user found...\n Plaese enter right account number\n Thank you\n");  
   getch();  
    }  
  else  
   { int cn;  
   
   printf("\n Welcome %s, Please Select right option which you want to need",bk.n);  
   printf("\n option 1. For Deposit Amount ");  
   printf("\n option 2. For Withdraw Amount ");  
   printf("\n option 3. For View Details ");  
   printf("\n option 4. For Foreign Exchange");  
   printf("\n option 5. Exit");  
   printf("\n\n Please Select your Option : ");  
   scanf ("%d",&cn);  
   switch(cn)  
   {case 1:  
   {
    printf("\n\n\n Dear %s, Plz enter your amount that you want to deposit in the bank:",bk.n);  
    scanf("%f",& ano);  
    bk.balance=bk.balance+ano;  
    printf("\n Your current available bank balance is:%f", bk.balance);  
    n1=sizeof(bk);  
    fseek(f,-n1,SEEK_CUR);  
    fwrite(&bk,n1,1,f);  
    fclose(f);  
    getch();  
    }break;  
    case 2:  
   { 
    printf("\n\n\n Dear %s, Plz enter your amount that you want to withdraw from your bank:",bk.n);  
    scanf("%f",& ano);  
    if(bk.balance-ano<=0)  
    {printf("\n\n Sorry, You dont have enough money in your bank account.");  
    fclose(f);  
    getch();  
     
    }  
    else  
    {bk.balance=bk.balance-ano;  
    printf("\n\n Your current available bank balance is:%f", bk.balance);  
    getch();  
    n1=sizeof(bk);  
    fseek(f,-n1,SEEK_CUR);  
    fwrite(&bk,n1,1,f);  
    fclose(f);  
      
    }  
    }break;  
    case 3:  
    {  
    printf("\n Your Bank Account Details are .....");  
    printf("\nAccount Holder Name    :%s",bk.n);  
    printf("\nHolder Account Number  :%d",bk.ano);  
    printf("\nAvailable Bank Balance :%f",bk.balance);  
    fclose(f);  
    printf("\n\n Enter any key to continue.....");  
    getch();   
     
    }break;  
    case 4:  
    {
    int s;  
    float u,w;  
    
    printf("\n Welcome to the foreign exchange convertor section \n Select the currency you wish to convert.\n");  
    printf("\n 1. US Dollar");  
    printf("\n 2. Euro");  
    printf("\n 3. Pound");  
    scanf("%d",&s);  
    switch(s)  
    {  
    case 1:  
    {   printf("\n Please enter the INR rupees:");  
    scanf("%f",&u);  
    w=u/73;  
    printf("\n The converted amount is:$%f",w);  
    getch();  
     
    }break;  
    case 2:  
    {   printf("\n Please enter the INR rupees:");  
    scanf("%f",&u);  
    w=u/87;  
    printf("\n The converted ammount is:€%f",w);  
    getch();  
     
    }break;  
    case 3:  
    {
    printf("\n Please enter the INR rupees:");  
    scanf("%f",&u);  
    w=u/101;  
    printf("\n The converted rate is:£%f",w);  
    getch();  
      
    }
    }}}}}