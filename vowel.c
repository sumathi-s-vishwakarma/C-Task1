#include<stdio.h>
int main()
{
char c;
printf("Enter character: ");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("vowel\n");
}
else
{
printf("consonants\n");
}
return 0;
}
