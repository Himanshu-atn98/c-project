#include<stdio.h>
int lmn(int);
int main()
{
int x;
x=lmn(1);
printf("********%d******\n",x);
return 0;
}
int lmn(int p)
{
if(p==4) 
{
//printf("Printf If mein gaya controll return\n");
return p;
}
//printf("p=%d\n",p); //lmR function ko call karne se pehale p ki value check kar rahe hai
lmn(p+1);
printf("%d\n",p);
}