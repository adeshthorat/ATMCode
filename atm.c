#include<stdio.h>
int stat();        //Mini Statment
int menu();       //Menu 
int cont();      //Continue OR Exit
int a_menu(int c);//Choice Func.
int wd();       //Withdraw Function
int vp = 8525;  //Valid PIN
float mb=15000;   //Main Balance
int main()
{
    int c=0,p;
    
    while(c<3)
    {
    printf("Enter PIN = ");
    scanf("%d",&p);
    if(p==vp)
       {
       printf("CORRECT PIN\n");
       menu(); //Call To Menu Func.
       break;
       }
    else
        {
          c++;
    if(c==3)
          printf("\n\t---------Transcation Declined----------");
       else
          printf("INCORRECT PIN\n");
        }
    }
    
    return 0;
}
int menu()
{
    int c,res;
    printf("\t-------MENU-------\n");
    printf("\t1. MINI STATMENT\n");
    printf("\t2. BALANCE INQUIRY\n");
    printf("\t3. WITHDRAW AMOUNT\n\n");
    printf("Enter a Option = ");
    scanf("%d",&c);  
    res =a_menu(c); //Choice Function
    return res;
}
int a_menu(int c)
{
    
   switch(c)
   {
       case 1:
       stat(); //Mini Statment Func.
       break;
 
       case 2:
       printf("\tRs %.2f.",mb);
       cont(); //Program to Continue OR Exit Func.
       break;

       case 3:
       wd();  //Amount Withdraw Func.
       break;

       default:
       printf("Invalid Input");
       cont(); //Program to Continue OR Exit Func.
   }
}

int stat() //Mini Statment
{
    printf("\t1/4/2021                 850.40  Dr\n");
    printf("\t21/4/2021                1252.00  Dr\n");
    printf("\t11/5/2021                10110.40 Cr\n");
    printf("\t18/8/2021                 50.00   Dr\n");
    printf("\t15/9/2021                 1050.40 Dr\n");
    cont(); //Program to Continue OR Exit Func.

}
int wd() //Amount Withdraw Func.
{
    int wd;
    printf("Enter a amount to be Withdraw= ");
    scanf("%d",&wd);
    if(!(wd%100==0&&wd%500==0))
    {
    printf("\t-----Please,Enter a amount in Multiple of 100,500 etc------\t\n");
    cont(); //Program to Continue OR Exit Func.
    }
    else
    if(mb>=wd){
    mb=mb-wd;
    printf("Withdraw Amount:  Rs %d\n",wd);
    printf("Updated Balance = Rs  %.2f",mb);
    cont(); //Program to Continue OR Exit Func.
    }
    else
    {
    printf("\t---------Insufficient Balance-------------");
    cont(); //Program to Continue OR Exit Func.
    }
    return 0;
}
int cont() //Program to Continue OR Exit Func.
{ 
    int a,r;
    printf("\n1 Continue\n\n0 Exit\n");
    scanf("%d",&a);
    if(a==1)
    menu();
    else
    printf("\t-----------Thank You!!!!----------");
    return 0;
}