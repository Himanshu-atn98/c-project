#include<stdio.h>
struct abc
{
int x,y;
char m;
};
int main()
{
struct abc g,t;
g.x=10;
g.y=20;
printf("%d\n%d\n",g.x,g.y);
t.y=30;
t.m='2';
return 0;
}
