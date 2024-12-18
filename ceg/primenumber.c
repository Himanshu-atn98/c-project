#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the number:");
scanf("%d",&x);
y=2;
z=0;
while(y<=x/2)
{
if(x%y==0)
{
z=1;
break;
}
y++;
}
if(z==1) 
{
printf("Given number %d is not prime number",x);
}
else 
{
printf("Given number %d is prime number",x);
}
return 0;
}