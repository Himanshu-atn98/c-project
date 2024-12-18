#include<stdio.h>
#include<string.h>
int main()
{
char x[51];
int m,n;
printf("Enter the string:");
gets(x);
m=0;
while(x[m]!='\0')
{
m++;
}
m--;
while(m>0 && x[m]==' ')
{
m--;
}
m++;
x[m]='\0';
n=strlen(x);
printf("%s lenght is %d",x,n);
return 0;
}
