#include<stdio.h>
int main()
{
int x[5];
int *p;
p=x;
p[0]=10;
p[1]=20;
printf("*****Printing the value which is assined through Pointer*****\n");
printf("%d\n",x[0]);
printf("%d\n",x[1]);
x[2]=30;
x[3]=40;
x[4]=50;
printf("*****Printing the value through pointer*****\n");
printf("%d\n",p[2]);
printf("%d\n",p[3]);
printf("%d\n",p[4]);
return 0;
}