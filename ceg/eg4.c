#include<stdio.h>
void lmn(int,int);
int main()
{
int x,y;
x=10;
y=20;
lmn(x,y);
x=30;
y=40;
lmn(x,y);
x=60;
y=70;
lmn(x,y);
return 0;
}
void lmn(int p,int q)
{
int r;
r=p+q;
printf("Total sum of %d and %d is %d\n",p,q,r);
}
