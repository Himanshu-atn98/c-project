#include<stdio.h>
void upperCase(char *);
int main()
{
char x[21];
printf("Enter the string:");
gets(x);
fflush(stdin);
upperCase(x);
printf("Converted String is: %s",x);
return 0;
}
void upperCase(char *p)
{
while(*p!='\0')
{
if(*p<=122 && *p>=97)
{
*p=*p-32;
}
p++;
}
}