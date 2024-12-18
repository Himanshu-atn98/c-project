#include<stdio.h>
#include<string.h>
int compareString(char *,char *);
int main()
{
char a[21],b[21];
int x;
printf("Enter I string:");
gets(a);
fflush(stdin);
printf("Enter II string:");
gets(b);
fflush(stdin);
x=compareString(a,b);
if(x==0) printf("Same String");
else
{
if(x>0) printf("%s is less than %s",a,b);
if(x<0) printf("%s is greater than %s",a,b);
}
return 0;
}
int compareString(char *p,char *q)
{
int r;
while(*p!='\0' && *q!='\0')
{
if(*p!='\0' && *p>=97 && *p<=122)
{
*p=*p-32;
}

if(*q!='\0' && *q>=97 && *q<=122)
{
*q=*q-32;
} 

if(*p!=*q)
{
r=*p-*q;
}
p++;
q++;
}
if(*p==*q) return 0;
else return r;
}