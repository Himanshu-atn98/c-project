#include<stdio.h>
int main()
{
char ch;
printf("Enter Character:");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
{
ch=ch+32;
}
printf("LowerCase: %c\n",ch);
return 0;
}