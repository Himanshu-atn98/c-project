#include<stdio.h>
int main()
{
char x[81];
int m,n,y;
printf("Enter the string:");
gets(x);
//strlen(x);
m=0;

while(x[m]==' ')
{
m++;
}
y=0,n=0;
while(x[m]!='\0')
{
if(x[m]==' ' && x[m+1]!=' ' && x[m]!='\n')
{
n++;
}
m++;
}
if(n!=0) printf("THE NUMBER OF WORDS IN GIVEN STRING ARE %d",n+1);
else printf("THE NUMBER OF WORDS IN GIVEN STRING ARE %d",n);

return 0;
}
