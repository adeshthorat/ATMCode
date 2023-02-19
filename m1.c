#include<stdio.h>
int a_menu(int c);
int stat();
int main()
{
    int c,res;
    printf("\t-------MENU-------\n");
    printf("\t1. MINI STATMENT\n");
    printf("\t2. BALANCE INQUIRY\n");
    printf("\t3. WITHDRAW AMOUNT\n");
    printf("Enter a Option = ");
    scanf("%d",&c);  
    res =a_menu(c);
    return res;
}
int a_menu(int c)
{
   switch(c)
   {
       case 1:
       stat();
       break;
 
       case 2:
       break;

       case 3:
       break;

       default:
       printf("Invalid Input");
   }
}

int stat()
{
    printf("\t1/4/2021                 850.40  Dr\n");
    printf("\t21/4/2021                1252.00  Dr\n");
    printf("\t11/5/2021                10110.40 Cr\n");
    printf("\t18/8/2021                 50.00   Dr\n");
    printf("\t15/9/2021                 1050.40 Dr\n");

}


