#include<stdio.h>
int main()
{
int x[10],y,z,count,num;
y=0;
while(y<=9)
{
printf("Enter the numbers\n");
scanf("%d",&x[y]);
y++;
}
printf("Enter the number to search\n");
scanf("%d",&num);
y=0;
count=0;
z=0;
while(y<=9)
{
if(x[y]==num)
{
count++;
}
y++;
}
if(count==0) printf("Not Found");
else
{
printf("Given number %d is searched %d number of times",num,count);
}
return 0;
}
