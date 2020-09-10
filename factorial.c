#include<stdio.h>
int main()
{
int no;
long fact=1;
int i;
printf("enter number: ");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
fact = fact*i;
}
printf("factorial is %ld\n",fact);
return 0;
}
