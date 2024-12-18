#include<stdio.h>
int main()
{
int x[10],y,count,num,k,found;
y=0;
while(y<=9)
{
printf("Enter the number\n");
scanf("%d",&x[y]);
y++;
}
k=0;
while(k<=9)
{
num=x[k];
found=0;
y=0;
while(y<=k-1)
{
if(num==x[y])
{
found=1;
break;
}
y++;
}
if(found==0)
{
y=0;
count=0;
while(y<=9)
{
if(num==x[y])
{
count++;
}
y++;
}
if(count==1)
{
printf("%d found 1 time",num);
}
else
{
printf("%d found %d times",num,count);
}
}
k++;
}
return 0;
}

