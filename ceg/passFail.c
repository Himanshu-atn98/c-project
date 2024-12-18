#include<stdio.h>
int main()
{
int math,phy,chem,hin,eng;
printf("*****Module for Pass/Fail Result*****\n");
printf("Enter the marks of Mathematics(0-100):");
scanf("%d",&math);
if(math<0 || math>100) 
{
printf("Invalid marks\n");
 return 0;
}
printf("Enter the marks of Physics(0-100):");
scanf("%d",&phy);
if(phy<0 || phy>100) 
{
printf("Invalid marks\n");
 return 0;
}
printf("Enter the marks of Chemistry(0-100):");
scanf("%d",&chem);
if(chem<0 || chem>100) 
{
printf("Invalid marks\n");
 return 0;
}
printf("Enter the marks of English(0-100):");
scanf("%d",&eng);
if(eng<0 || eng>100) 
{
printf("Invalid marks\n");
 return 0;
}
printf("Enter the marks of Hindi(0-100):");
scanf("%d",&hin);
if(hin<0 || hin>100) 
{
printf("Invalid marks\n");
return 0;
}
int percentage,totalmarks;
//Pass,Supl & Fail...
if(math>=33 && phy>=33 && chem>=33 && eng>=33 && hin>=33)
{
printf("Result:Pass\n");
totalmarks=math+phy+chem+hin+eng;
printf("Total %d Marks Obtained Out Of 500\n",totalmarks);
percentage=totalmarks/5;
printf("Percentage:%d\n",percentage);

if(percentage>=60)
{
printf("Pass with I Dev\n");
return 0;
}
if(percentage<60 && percentage>=45)
{
printf("Pass with II Dev\n");
return 0;
}
if(percentage<45 && percentage>=33)
{
printf("Pass with III Dev\n");
return 0;
}


return 0;
}
else
{

if(math<33 && phy>=33 && chem>=33 && eng>=33 && hin>=33)
{
if(math<33 && math>=30)
{
printf("Result: Pass with grace of %d mark in Mathematics\n",33-math);
//return 0;
}
else
{
printf("Result: Supp\n");
return 0;
}
}
else
{
if(math>=33 && phy<33 && chem>=33 && eng>=33 && hin>=33)
{
if(phy<33 && phy>=30)
{
printf("Result: Pass with grace of %d mark in Physics\n",33-phy);
//return 0;
}
else
{
printf("Result: Supp\n");
return 0;
}
}
else
{
if(math>=33 && phy>=33 && chem<33 && eng>=33 && hin>=33)
{
if(chem<33 && chem>=30)
{
printf("Result: Pass with grace of %d mark\n in Chemistry",33-chem);
//return 0;
}
else
{
printf("Result: Supp\n");
return 0;
} 
}
else
{
if(math>=33 && phy>=33 && chem>=33 && eng<33 && hin>=33)
{
 if(eng<33 && eng>=30)
{
printf("Result: Pass with grace of %d mark in English\n",33-eng);
//return 0;
}
else
{
printf("Result: Supp\n");
return 0;
}
}
else
{
if(math>=33 && phy>=33 && chem>=33 && eng>=33 && hin<33)
{ if(hin<33 && hin>=30)
{
printf("Result: Pass with grace of %d mark in Hindi\n",33-hin);
//return 0;
}
else
{
printf("Result: Supp\n");
return 0;
}
}

//**
totalmarks=math+phy+chem+hin+eng;
printf("Total %d Marks Obtained Out Of 500\n",totalmarks);
percentage=totalmarks/5;
printf("Percentage:%d\n",percentage);

if(percentage>=60)
{
printf("Pass with I Dev\n");
return 0;
}
if(percentage<60 && percentage>=45)
{
printf("Pass with II Dev\n");
return 0;
}
if(percentage<45 && percentage>=33)
{
printf("Pass with III Dev\n");
return 0;
}







//**
else
{
printf("Result: Fail\n");
return 0;
}

}
}
}
}

}
return 0;
}
