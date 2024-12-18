#include<stdio.h>
int main()
{
char str[101];
int wordCount=0;
printf("Enter String:");
gets(str);
int x=0;


// To avoid left trim.
/*
while(str[x]==' ')
{
x++;
}
*/

while(str[x]!='\0')
{
if(str[x]==' ' || str[x]=='\n' || str[x]=='\t')
{
wordCount++;
}
x++;
}
wordCount++;
printf("%d words within given string\n",wordCount);
return 0;
}