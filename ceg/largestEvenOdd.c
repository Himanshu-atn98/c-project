#include<stdio.h>
int main()
{
int x[10],largestodd,largesteven,y;
y=0;
while(y<=9)
{
printf("Enter the numbers: ");
scanf("%d",&x[y]);
y++;
}
largestodd=0;
largesteven=0;
for(int e=0;e<=9;e++)
{
if(x[e]%2!=0 && largestodd<x[e]) largestodd=x[e];
if(x[e]%2==0 && largesteven<x[e]) largesteven=x[e];
y++;
}
if(largestodd!=0) printf("Largestodd: %d\n",largestodd);
else printf("There is no number is Odd\n");
if(largesteven!=0) printf("Largesteven: %d\n",largesteven);
else printf("There is no number is Even\n");
return 0;
}             