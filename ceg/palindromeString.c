#include<stdio.h>
#include<string.h>
int main()
{
char str[21];
printf("Enter String:");
gets(str);
int length=0;
int found=0;
//length=strlen(str);
while(str[length]!='\0')
{
length++;
}
length--;
for(int y=0;str[y]!='\0';y++)
{

// To avoid case sensitivity ,write these two if statements. 
/*
if(str[y]<=122 && str[y]>=97) str[y]=str[y]-32;
if(str[length]<=122 && str[length]>=97) str[length]=str[length]-32;
*/


if(str[y]!=str[length])
{
found=1;
break;
}
length--;
}

if(found!=0) printf("%s is not palindrome\n",str);
else printf("%s is palindrome\n",str);
return 0;
}