#include<stdio.h>
int lmn(int);
int main()
{
int x;
x=lmn(5);
printf("******%d******\n",x);
return 0;
}
int lmn(int p)
{
if(p==1) return 1;
return lmn(p-1)*p;
}
