#include<stdio.h>
#include<string.h>
int main()
{
char str[51];
int length=0;
printf("Enter String: ");
gets(str);
/*
for(int e=0;str[e]!='\0';e++)
{
length++;
}
printf("Length of '%s' is %d\n",str,length);
*/
length=strlen(str);
printf("Length of '%s' is: %d\n",str,length);
return 0;
}