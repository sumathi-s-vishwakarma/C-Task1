#include<stdio.h>
int main()
{
int i;
int no;
int a=-1,b=1,c;
printf("enter number: ");
scanf("%d",&no);
printf("fibonnace series:");
for(i=0;i<=no;i++)
{
c=a+b;
printf("%d",c);
a = b;
b = c;
}
return 0;
}
