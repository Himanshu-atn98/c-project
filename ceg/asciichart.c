
#include<stdio.h>
int main()
{
int x,y,z;
char m[256];
z=32;
y=0;
while(y<=255)
{
printf("%c(%d)%c",y,y,z);
y++;
}
printf("%c",65);
return 0;
}