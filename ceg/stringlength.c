
#include<stdio.h>
int main()
{
char x[21];
int m;
printf("Enter the string: ");
scanf("%s",x);
m=0;
while(x[m]!='\0')
{
m++;
/*printf("Control %d baar LOOP mein gaya\n",m);*/	
}
printf("Length of %s is %d",x,m);
return 0;
 }
