#include<stdio.h>
int main()
{
char name [ ]="Shama Fathima Shaik";
char regnumber [ ]= "24KE1A05R5";
int cprogrammingmarks=84;
int mathematicsmarks=75;
int englishmarks=92;
int totalmarks=cprogrammingmarks+mathematicsmarks+englishmarks;
float averagemarks=totalmarks/3.0;
printf("Student Name: %s\n" , name);
printf("RegNumber: %s\n\n" , regnumber);
printf("C programming Marks: %d\n" , cprogrammingmarks);
printf("Mathematics Marks:%d\n" , mathematicsmarks);
printf("English Marks:%d\n\n" ,englishmarks);
printf("Total Marks:%d\n" ,totalmarks);
printf("Average Marks:%.2f\n" , averagemarks);
return 0;
}
