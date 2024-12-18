#include<stdio.h>
int lengthOfstring(char *);
int main()
{
char a[51];
printf("Enter String:");
gets(a);
int length=0;
length=lengthOfstring(a);
printf("Length of '%s' is: %d\n",a,length);
return 0;
}
int lengthOfstring(char *p)
{
int x=0;
while(*p!='\0')
{
x++;
p++;
}
return x;
}
