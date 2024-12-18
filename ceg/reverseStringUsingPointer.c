#include<stdio.h>
void reverse(char *,char *);
int main()
{
char a[21],b[21];
printf("Enter the string:");
gets(a);
fflush(stdin);
reverse(a,b);
printf("Reversed String is: %s",b);
return 0;
}
void reverse(char *p,char *q)
{
char g;
int x=0;
while(*p!='\0')
{
//printf("p wale loop mein gaya\n");
p++;
}
p--;
while(*q!=*p)
{
//printf("Q wale loop mein gaya\n");
g=*p;
*p=*q;
*q=g;
q++;
p--;
}
}
