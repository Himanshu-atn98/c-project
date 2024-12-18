#include<stdio.h>
void reverseString(char *);
int main()
{
char a[51];
printf("Enter String:");
gets(a);
reverseString(a);
printf("Reversed String: '%s'\n",a);
return 0;
}
void reverseString(char *p)
{
char *start, *end,ch;
int x=0;
start=p;
end=p;
while(*start!='\0')
{
start++; 
x++;
}
//printf("X:%d\n",x);
start--;
for(int e=0;e<x/2;e++)
{
ch=*end;
*end=*start;
*start=ch;
end++;
start--;
}
}
