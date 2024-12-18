#include<stdio.h>
void upperTolowerCase(char *);
void lowerToupperCase(char *);
int main()
{
char a[51];
printf("Enter String:");
gets(a);
upperTolowerCase(a);
printf("Coverted String into LowerCase: '%s'\n",a);

lowerToupperCase(a);
printf("Converted String into UpperCase: '%s'\n",a);
return 0;
}


void upperTolowerCase(char *p)
{
while(*p!='\0')
{
if(*p>=65 && *p<=90)
{
*p=*p+32;
}
p++;
}
}


void lowerToupperCase(char *p)
{
while(*p!='\0')
{
if(*p<=122 && *p>=97)
{
*p=*p-32;
}
p++;
}
}

