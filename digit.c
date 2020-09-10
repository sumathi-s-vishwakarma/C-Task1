#include<stdio.h>
int main()
{
int val;
int count=0;
printf("enter number:");
scanf("%d",&val);
while(val!=0)
{
val = val/10;
count++;
}
printf("no of digits: %d\n",count);
return 0;
}
