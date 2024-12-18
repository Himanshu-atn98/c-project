#include<stdio.h>
int main()
{
int s,e,y,z,s1;
printf("Enter the starting point:");
scanf("%d",&s);
printf("Enter the ending point:");
scanf("%d",&e);
z=0;
y=2;
s1=s;
while(s<=e)
{
while(y<=s/2)
{
if(s%y==0)
{
z++;
break;
}
y++;
}
s++;
}
printf("Total prime numbers between %d to %d are: %d",s1,e,z);

return 0;
}