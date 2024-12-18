#include<stdio.h>
#include<string.h>
int main()
{
char a[21],b[21];
printf("Enter First String:");
gets(a);
printf("Enter Second String:");
gets(b);

// I Tech
if(strlen(a)==strlen(b))
{
int found=0;
int y=0;

while(a[y]!='\0' && b[y]!='\0')
{
if(a[y]!=b[y])
{
found=1;
break;
}
y++;
}
if(found!=0) printf("Strings are not same\n");
else printf("Strings are same\n");
}


else
{
if(strlen(a)>strlen(b)) printf("String are not same.\nFirst String is greater in length.\n");
else printf("String are not same.\nSecond String is greater in length.\n");
}
return 0;
}