
#include <stdio.h>
#include <stdlib.h>
#include <string.h>






void Account_info()
{
    int n=1001;
  printf("\nEnter Your Account Number:");
  scanf("%d",&n);
  if(n==1001)
  { 
    printf("\nYour Account Is Verified");
    
  }
  else{
     printf("\nYou Entered wrong Account Number");
  }
  int  ac=1001;
 
  if(ac==1001 )
  {
  printf("\nAccount Holder Name :%d",ac);
  
  }
  printf("\nAccount Holder MO no : 7666477249");
   printf("\nAccount  Holder Address :At post Wathwada Tq Dharashiv kallamb");
    printf("\nEnter To Home Page\n");
    char a;
         printf("\nPres  Yes\n");
        scanf("%s",&a);
        system("cls");
    
    char t;
     scanf("%c",&t);
   
    printf("\n                                                   ***   Welcome   ***                         ");
   // scanf("%c",&c);
   // system("clear");
    printf("\n                                                   $$$   SP BANK   $$$                         ");
    //system("clear");
    printf("\n");
    printf("\n (1) Creating New Account\t (2) Cash Deposit\t (3) Cash Withdrawal\t (4) Display Account Information\t (5) Log Out\n");
     printf("\n");
    printf("\n                                                Please Select Your Choise "                    );
    scanf("%d",&n);
    int choice;
 
};

void account()
{
   char name[100];
    char name2[100];
     char name3[100];
    char address[100];
    char address1[100];
    char address2[100];
    char address3[100];
    char address4[100];
    char address5[100];
    long long cont;
    int  init_depo;
    int  i=1001;
        system("cls");

     //name,address,contact details, initial deposite;

     printf("\nEnter Your Name\n");
     scanf("%s %s%s",&name,&name2,&name3);
      printf("\nEnter Your Address\n");
     scanf("%S%s%s%s%s%s%s",&address,&address1,address2,address2,address3,address4,address5);
      printf("\nEnter Your Contact Details\n");
     scanf("%ld",cont);
     printf("\nEnter your Initial deposite Amount\n");
     scanf("%d",& init_depo);
     if(init_depo<1000)
     {
      printf("\nPlease Deposite minimum 1000 RS\n");
     }
      else if(init_depo>=1000)
     {
        printf("\n Congrutaliation Your Account is Succesifually credited");
        printf("\n Your SP Bank Account Number is :%d",i);
     
        // scanf("%d",&i);
        char a;
        printf("\nEnter To Home Page\n");
         printf("\nPres  Yes\n");
        scanf("%s",&a);
        system("cls");
    
    char t;
     scanf("%c",&t);
     int n;
    char c;
    printf("\n                                                   ***   Welcome   ***                         ");
   // scanf("%c",&c);
   // system("clear");
    printf("\n                                                   $$$   SP BANK   $$$                         ");
    //system("clear");
    printf("\n");
    printf("\n (1) Creating New Account\t (2) Cash Deposit\t (3) Cash Withdrawal\t (4) Display Account Information\t (5) Log Out\n");
     printf("\n");
    printf("\n                                                Please Select Your Choise "                    );
    scanf("%d",&n);
    int choice;
        
     }
     
    
     

 
};
void Cash_Withdrawal()
{
  int n=1001;
   printf("\n WElcome To Our Cash Counter  ");
   printf("\n Enter Your Bank Account Number :");
   
   scanf("%d",&n);
   if(n==1001)
   {
      printf("\n Successifully login ");
   }
   else{
         printf("\nLogin Failed please try agin");
   }
   int j;

   printf("\nEnter Withdraw Amount :");
   scanf("%d",&j);
   int amount;



   int o;
printf("\nEnter Your OTP =");
scanf("%d",&o);


if(o==9999)
{
  printf("\n Withdraw Successfully");
}
else{
  printf("\nYou Entered Invalid OTP");

}
printf("\n BalanCe Enquiry");
printf("\n to Check Balance In Account press yes ");
char a;
scanf("%s",&a);
printf("total balance =1000");
 printf("\nEnter To Home Page\n");
         printf("\nPres  Yes\n");
        scanf("%s",&a);
        system("cls");
    
    char t;
     scanf("%c",&t);
    
    char c;
    printf("\n                                                   ***   Welcome   ***                         ");
   // scanf("%c",&c);
   // system("clear");
    printf("\n                                                   $$$   SP BANK   $$$                         ");
    //system("clear");
    printf("\n");
    printf("\n (1) Creating New Account\t (2) Cash Deposit\t (3) Cash Withdrawal\t (4) Display Account Information\t (5) Log Out\n");
     printf("\n");
    printf("\n                                                Please Select Your Choise "                    );
    scanf("%d",&n);
    
 

};
void cash_deposit()
{
 
  
     printf("\nEnter Your Account Number : ");
    int i=1001;
    scanf("%d",&i);
    if(i==1001)
    {
     
      printf("\n  Verify Successfully :");
    }
    else  {
      char n;
      printf("\n you Entered Wrong  Id");
      printf("\nInvalid Creditals");
      
     
    };
    
  
    printf("\n");

    int id;
    printf("\nEnter your LOg In  Id :");
    scanf("%d",&id);
    int k=8374;
    if(k==8374)
    {
        printf("\nEnter Your Bank Password :");
    }
    else
    {
        printf("\n you Entered Wrong  Id");
      printf("\nInvalid Creditals");
    }
    int pass=123;
    scanf("%d",&pass);
    
    printf("\n Accout Balance : 1000 RS");
    printf("\n------------------------------------------------------------------------------------------------------------------------------");
    int a;
    printf("\n Cash Deposite Amount in Rs :");
    scanf("%d",&a);
    int deposite_amount=1000;
    int total=deposite_amount+a;
    printf("\n  Total Deposite  amount  in Rs=%d",total);

     printf("\nEnter To Home Page\n");
         printf("\nPres  Yes\n");
        scanf("%s",&a);
        system("cls");
    
    char t;
     scanf("%c",&t);
     
    printf("\n                                                   ***   Welcome   ***                         ");
   // scanf("%c",&c);
   // system("clear");
    printf("\n                                                   $$$   SP BANK   $$$                         ");
    //system("clear");
    printf("\n");
    printf("\n (1) Creating New Account\t (2) Cash Deposit\t (3) Cash Withdrawal\t (4) Display Account Information\t (5) Log Out\n");
     printf("\n");
    printf("\n                                                Please Select Your Choise "                    );
    
    
  
};
Logout()
{
   printf("\n____________________________________________________________________________________________________________________");
  char a;
  printf("\n Sign out ");
   printf("\n____________________________________________________________________________________________________________________");
    printf("\n                                                                                                                    ");
    
  printf("\nTo LOg Out press ");
   printf("\nYes ");
  scanf("%s",&a);
   
    printf("\nThank You ");
    system("cls");
    
    char t;
     scanf("%c",&t);
     int n;
    char c;
    printf("\n                                                   ***   Welcome   ***                         ");
   // scanf("%c",&c);
   // system("clear");
    printf("\n                                                   $$$   SP BANK   $$$                         ");
    //system("clear");
    printf("\n");
    printf("\n (1) Creating New Account\t (2) Cash Deposit\t (3) Cash Withdrawal\t (4) Display Account Information\t (5) Log Out\n");
     printf("\n");
    printf("\n                                                Please Select Your Choise "                    );
    scanf("%d",&n);
 
};

void  main()
{

 
    
    int n;
    char c;
    printf("\n                                                   ***   Welcome   ***                         ");
    scanf("%c",&c);
   // system("clear");
    printf("\n                                                   $$$   SP BANK   $$$                         ");
    //system("clear");
    printf("\n");
    printf("\n (1) Creating New Account\t (2) Cash Deposit\t (3) Cash Withdrawal\t (4) Display Account Information\t (5) Log Out\n");
     printf("\n");
    printf("\n                                                Please Select Your Choise "                    );
    scanf("%d",&n);
    int choice;
  /*if(choice>6)
   {
 printf("\nInvalid Creditals");
  }*/ 


    

    switch (n)
    {
        
    case 1: printf("\nCreating New Account");
    account();

        break;
        case 2: printf("\nCash Deposit");
        cash_deposit();
        break;
        case 3: printf("\nCash Withdrawal");
        Cash_Withdrawal();
        break;
        case 4: printf("\nDisplay Account Information");
        Account_info();

        break;
        case 5: printf("\nLog Out");
        Logout();
        break;
        case 6: printf("\nInvalid Creditals");
        break;
    
    default:
        
     break;
      }
}
