#include<stdio.h>
#include<string.h>
int compareString(char *,char*);
int main()
{
char a[51],b[51];
printf("Enter I String:");
gets(a);
fflush(stdin);
printf("Enter II String:");
gets(b);
fflush(stdin);
int length;
length=compareString(a,b);
if(length==0 ||length==1)
{
if(length!=0) printf("Strings are same in length but differ in Case\n");
else printf("Strings are same\n");
}
else
{
if(length<0) printf("Strings are not same\n'%s' is less than '%s'\n",a,b);
if(length>1) printf("Strings are not same\n'%s' is greater than '%s'\n",a,b);
}
return 0;
}
int compareString(char *p,char *q)
{
int x,y;
x=strlen(p);
y=strlen(q);
printf("X:%d\nY:=%d\n",x,y);

if(strlen(p)==strlen(q))
{
while(*p!='\0' && *q!='\0')
{
if(*p!=*q)
{
return 1;
}
p++;
q++;
}

return 0;
}
else
{
if(strlen(p)>strlen(q)) return 2;
if(strlen(p)<strlen(q)) return -1;
}
}