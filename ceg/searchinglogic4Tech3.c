#include<stdio.h>
int main()
{
int x[10],y;
y=0;
while(y<=9)
{
printf("Enter the number:");
scanf("%d",&x[y]);
y++;
}
for(int e=0;e<=9;e++)
{
int count,num;
count=0;
num=x[e];
for(int f=0;f<=9;f++)
{
if(num==x[f] && num!=NULL)
{
count++;
x[f]=NULL;
}
}
if(num!=NULL) printf("%d is repeated %d time within given array\n",num,count);
}
return 0;
}
