#include<stdio.h>
#include<string.h>
void addStudent();
void editStudent();
void deleteStudent();
void displayStudent();
int rollNumber[100];
char name[100][21];
int numberOfrecords;
int main()
{
int ch;
int numberOfrecords=0;
while(1)
{
printf("*****Menu*****\n");
printf("1. Add Student\n");
printf("2. Edit Student\n");
printf("3. Search Student\n");
printf("4. Delete Student\n");
printf("5. Display Student\n");
printf("6. Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
fflush(stdin);
if(ch==1) addStudent();
if(ch==2) editStudent();
if(ch==4) deleteStudent();
if(ch==5) displayStudent();
if(ch==6) break;
}
}
//Add Student
void addStudent()
{
int k,e;
printf("Student (Add Module)\n");
printf("Enter the rollnumber:");
scanf("%d",&k);
fflush(stdin);
if(k<0) 
{
printf("Invalid rollnumber\n");
return;
}
if(numberOfrecords>100)
{
printf("100 Students have been already added.\n You can not add more.");
return;
}
for(int e=0;k==rollNumber[e];e++)
{
printf("This rollnumber have been alloted to %s\n",name[e]);
return;
}
rollNumber[numberOfrecords]=k;
printf("Enter the name of student:");
gets(name[numberOfrecords]);
fflush(stdin);
numberOfrecords++;
printf("Student Added\n");
}

// Edit Student
void editStudent()
{
printf("Student (Edit Module)\n");
int k;
if(numberOfrecords==0)
{
printf("No Reocrds\n");
return;
}

printf("Enter roll number to edit:");
scanf("%d",&k);
fflush(stdin);
for(int e=0;k==rollNumber[e];e++)
{
printf("Name Of Student:%s\n",name[e]);
printf("Edit the name:");
gets(name[e]);
fflush(stdin);
printf("Student Updated\n");
return;
}
printf("Roll Number not found Or Invalid\n");
return;
}

//DeleteStudent
void deleteStudent()
{
int k;
char ch;
printf("Student (Delete Module)\n");
if(numberOfrecords<=0)
{
printf("No Records Added\n");
return;
}
printf("Enter roll number to delete student:");
scanf("%d",&k);
fflush(stdin);
if(k<0)
{
printf("Invalid roll number\n");
return;
}
int e=0;
while(e<numberOfrecords) 
{
if(k==rollNumber[e])
{
 break;
}
}
printf("Delete Student: %s (Y/N):",name[e]);
scanf("%c",&ch);
if(ch=='Y'||ch=='y')
{
while(e<numberOfrecords-1)
{
rollNumber[e]=rollNumber[e+1];
strcpy(name[e],name[e+1]);
e++;
}
}
else
{
printf("Student not deleted\n");
return ;
}

numberOfrecords--;
printf("Student Deleted\n");
}


//Display Student
void displayStudent()
{
if(numberOfrecords<0) 
{
printf("No records found:\n");
return;
}
for(int e=0;e<=numberOfrecords;e++)
{
printf("Roll Number:%d\n",rollNumber[e]);
printf("Name: %s\n",name[e]);
}
}