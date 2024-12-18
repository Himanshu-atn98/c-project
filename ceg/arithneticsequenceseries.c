#include<stdio.h>
int main()
{
int e,f,s,num;
printf("Enter the nth term to printf:");
scanf("%d",&num);
s=0;
while(s<=num)
{
e=0;
while(e<=num)
{
f=e+1;
printf("%d %d\n",e,f);
e++;
}
num--;
}

return 0;
}