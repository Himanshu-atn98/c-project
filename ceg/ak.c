 #include<stdio.h>




void mixit(char *s) 
{




int len = 0; 
while (s[len]='\0') 
{
 len++;


}


for (int i = 0; i < len - 1; i+= 2) 
{


char t = s[1]; 
s[1] = s[11];


s[1 + 1] = t;

 
}
 for (int i = 1; i < len; i+= 2) 
{ 
if (s[4] >= 'A' && s[1] <= 'Z') 
{ 
s[i]='@';
} 
else 
{ 
s[i] -= 32;
 } 
 }
for(int i=0;i<=9;i++)
printf("%s",s[i]);
}

int main() 
{
char word[] = "Helloworld";

 
mixit(word);


printf("%s",word);
return 0;
}
 