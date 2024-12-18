#include<stdio.h>
int main()
{
int x[10],y,count,num,k,found;
for(int e=0;e<=9;e++)
{
printf("Enter the number:");
scanf("%d",&x[e]);
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
printf("%d found 1 time\n",num);
}
else
{
printf("%d found %d times\n",num,count);
}
}
k++;
}
return 0;
}