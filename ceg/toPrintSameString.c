#include<stdio.h>
int main()
{
char a[81],b[81];
int x,y,z;
printf("Enter the Frist String:");
gets(a);
fflush(stdin);
printf("Enter the Second String:");
gets(b);
fflush(stdin);
x=0;
y=0;
while(a[x]!='\0' && b[x]!='\0')
{
if(a[x]!=b[x])
{
y++;
break;
}
x++;
}
if(y) printf("Strings are not same");
else printf("Strings are same");
return 0;
}