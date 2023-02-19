#include<stdio.h>
int cont();
int main()
{
    int wd,mb=14200;
    printf("Enter a amount to be Withdraw= ");
    scanf("%d",&wd);
    if(!(wd%100==0&&wd%500==0))
    {
    printf("\t-----Please,Enter a amount in Multiple of 100,500 etc------\t\n");
    cont();
    }
    else
    if(mb>wd){
    mb-=wd;
    printf("Withdraw Amount:%d\n",wd);
    printf("Updated Balance = %d",mb);
    cont();
    }
    else
    {
    printf("Insufficient Balance");
    cont();
    }
    return 0;
}

int cont()
{ 
    int a,r;
    printf("\n1 Continue\n\n0 Exit\n");
    scanf("%d",&a);
    if(a==1)
    main();
    else
    printf("Thank You");
    return 0;
}