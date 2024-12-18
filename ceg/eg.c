 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
int len;
char name[1];
};
int main()


{


char newname[] = "Rahul";


struct emp *p = (struct emp *) malloc(sizeof(struct emp)-1 +

strlen(newname)+1);


p->len=strlen(newname);


strcpy(p->name, newname); 
printf("%d#%s", p->len, p->name); 
return 0;


}

 