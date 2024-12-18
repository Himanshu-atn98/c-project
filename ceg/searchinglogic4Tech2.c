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
int a[10];
int z=0;
a[z]=0;
for(int e=0;e<=9;e++)
{
int count,num;
count=0;
num=x[e];
for(int j=0;j<=sizeof(a) && a[j]!=0;j++)
{
if(num==a[j])
{
e++;
num=x[e];
}
}
for(int f=0;f<=9;f++)
{

for(int k=0;e<=sizeof(a) && num==a[k];k++)
{
count++;
f++;
}

if(num==x[f])
{
count++;
if(count>1)
{
a[z]=num;
}
}

}
 printf("%d is repeated %d time within given array\n",num,count);
}
return 0;
}
