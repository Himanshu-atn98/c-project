#include<stdio.h>
int main()
{
char x[21];
int m;
printf("Enter the string:");
scanf("%s",x);
m=0;
while(x[m]!='\0')
{
if(x[m]<=122 && x[m]>=97)
{
x[m]=x[m]-32;
}
m++;
}
x[m]='\0';
printf("The Converted String is %s",x);
return 0;
}
