#include<stdio.h>
int main()
{
char cusname[ ]="Shama";
float prinamount=10000;
float time=2;
float rate=3;
float si=(prinamount*time*rate)/100;
printf("Customer Name : %s\n", cusname);
printf("Principal Amount : %.1f\n\n", prinamount);
printf("Time : %.1f\n", time);
printf("Rate of Interest : %.1f\n\n", rate);
printf("Simple Interest : %.2f", si);
return 0;
}
