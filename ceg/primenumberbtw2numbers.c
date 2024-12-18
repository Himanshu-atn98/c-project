#include<stdio.h>
int main()
{
int start,end,count,s;
printf("Enter the start point:");
scanf("%d",&start);
printf("Enter the end point:");
scanf("%d",&end);
count=0;
s=start;
printf("Prime Numbers: ");
while(s<=end)
{
int y,found;
y=2;
found=0;
while(y<=s/2)
{
if(s%y==0)
{
found=1;
break;
}
y++;
}
if(found==0) 
{
count++;
printf("%d ",s);
}
s++;
}
printf("\nThere are %d prime numbers between %d and %d",count,start,end);
return 0;
}