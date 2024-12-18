#include<stdio.h>
#include<string.h>
int main()
{
char str[21],ch;
printf("Enter String:");
gets(str);
int length=0;
length=strlen(str);
int f=length;
printf("Length: %d\n",length);
for(int e=0;e<length/2;e++)
{
ch=str[e];
str[e]=str[f-1];
str[f-1]=ch;
f--;
}
printf("Inverse String:%s\n",str);
return 0;
}