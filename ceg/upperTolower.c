#include<stdio.h>
int main()
{
char x[21];
int m;
printf("Enter the String:");
scanf("%s",x);
m=0;
while(x[m]!='\0')
{
if(x[m]>=65 && x[m]<=90)
{
x[m]=x[m]+32;
}
m++;
}
x[m]='\0';
printf("The Converted String is %s",x);
return 0;
}