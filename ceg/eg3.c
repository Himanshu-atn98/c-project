 #include<stdio.h>
int main()
{
int x,y,z,n;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the nth number till it you want to table of %d\n",n);
scanf("%d",&x);
printf("The table of %d below as\n",n);
y=1;
while(y<=x)
{
z=n*y;
printf("%d\n",z);
y++;
}
return 0;
}
