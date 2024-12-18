#include<stdio.h>
#include<string.h>
//void show(struct employee );
struct employee
{
int code;
float salary;
char name[21];
};
void show( struct employee *emp)
{
printf("**************Assinged In Show Function************\n");
emp->code=102;
emp->salary=77.78;
strcpy(emp->name,"Kajol");
//printf("The code of employee is:%d\n",emp.code);
//printf("The salary of employee is:2%f\n",emp.salary);
//printf("The name of employee is:%s\n",emp.name);
}
int main()
{
struct employee e1;
struct employee *ptr;
ptr=&e1;
ptr->code=101;
ptr->salary=555.25;
strcpy(ptr->name,"Himanshu");
show(&e1);
printf("*********PRINTING THROUGH MAIN FUNCTION***********\n");
printf("The code of employee is:%d\n",e1.code);
printf("The salary of employee is:%2f\n",e1.salary);
printf("The name of employee is:%s\n",e1.name);

return 0;
}
