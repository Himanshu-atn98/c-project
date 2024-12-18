#include<stdio.h>
int main()
{
char a[101];
printf("Enter String:");
gets(a);
int x=0;
int y=0;
while(a[x]==' ')
{
x++;
}
while(a[x]!='\0')
{
//y=x;
if(a[x]==' ')
{
while(a[x]==' ' && a[x+1]==' ')
{
x++;
}
}
a[y]=a[x];
y++;
x++;
}
if(a[x-1]==' ') y--;
a[y]='\0';
printf("Terimed String:(%s)\n",a);

//To Count the words

int z=0;
int wordCount=0;
while(a[z]!='\0')
{
if(a[z]==' ')
{
wordCount++;
}
z++;
}
wordCount++;
printf("\nTotal words in (%s) are %d\n",a,wordCount);
return 0;

}