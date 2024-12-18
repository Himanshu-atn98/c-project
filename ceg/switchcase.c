#include<stdio.h>
int main()
{
int x;
printf("1.Name of City\n2.Name of State\n3.Name of Country\n4.Exit\n");
scanf("%d",&x);
switch(x)
{
case 1: 
printf("Ujjain\n"); 
break;
case 2:
printf("Madhya Pradesh\n");
break;
case 3:
printf("India\n");
break;
case 4:
break;
default: 
printf("Please enter your choice");
}
return 0;
}