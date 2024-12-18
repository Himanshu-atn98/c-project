 #include<stdio.h>
int main()
{
int a[5]={10,20,30,400,50};
int b[5]={1000,90,80,70,60};
int larg1,larg2,low1,low2,y;
y=0;
larg1=a[0];
larg2=b[0];
low1=a[0];
low2=b[0];
while(y<=4)
{
if(larg1<a[y])
{
larg1=a[y];
}
if(low1>a[y])
{
low1=a[y];
}
if(larg2<b[y])
{
larg2=b[y];
}
if(low2>b[y])
{
low2=b[y];
}
y++;
}
if(larg1>larg2) printf("Greatest: %d\n",larg1); 
else printf("Greatest :%d\n",larg2); 

if(low1<low2) printf("Smallest: %d\n",low1);
else printf("Smallest: %d\n",low2);
 return 0;
}