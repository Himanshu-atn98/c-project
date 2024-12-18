#include<stdio.h>
int stringlength(char *);
int main()
{
char x[21];
int a,b;
printf("Enter the String:");
gets(x);
fflush(stdin);
a=stringlength(x);
printf("Length Of %s is %d",x,a);
return 0;
}
int stringlength(char *p)
{
int x=0;
while(*p!='\0')
{
x++;
p++;
}
//printf("value of x is %d\n",x);
return x;
}