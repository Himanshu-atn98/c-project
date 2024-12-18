#include<stdio.h>
int main()
{
int a[10],b[10],x,y,z;
for(int e=0;e<=9;e++)
{
printf("Enter the number: ");
scanf("%d",&a[e]);
fflush(stdin);
}
b[0]=0;
int f=0;
int g=0;
while(f<=9)
{
int num,count;
count=0;
num=a[f];
for(int k=0;k<=g-1;k++)
{
if(num==b[k])
{
f++;
num=a[f];
k=0;
}
}

for(int j=0;j<=9;j++)
{

if(num==a[j])
{
count++;
}
if(num==a[j] && count>1)
{
//count++;
b[g]=num;
g++;
}

}
printf("%d is repeated %d times within given array\n",num,count);
//g++;
f++;
}
return 0;
}