#include<stdio.h>
int main()
{
char c;
printf("Enter character: ");
scanf("%c",&c);
if(isalpha(c))
{
printf("alphabet\n");
}
else
{
printf("not alphabet\n");
}
return 0;
}
