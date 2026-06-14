#include<stdio.h>
int main()
{
char Empname[ ]="Shama Fathima Shaik";
int Empid= 1123;
int Empsalary=150000;
float hra=Empsalary*0.20;
float bonus=Empsalary*0.10;
float totalsalary=Empsalary+hra+bonus;
printf("Employee Name:%s\n" ,Empname);
printf("Employee ID:%d\n" ,Empid);
printf("Employee Salary:%d\n\n" , Empsalary);
printf("Employee HRA:%.2f\n" ,hra);
printf("Employee bonus:%.2f\n\n" ,bonus);
printf("Employee Total Salary:%.2f" , totalsalary);
return 0;
}
