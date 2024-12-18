#include<stdio.h>
int main()
{
char a[21],b[21];
printf("Enter String:");
gets(a);
int e=0;
while(a[e]!='\0')
{
b[e]=a[e];
e++;
}
//printf("Copied String from a To b:%s\n",b);
b[e]='\0';
printf("Copied String from a To b:%s\n",b);
return 0;
}