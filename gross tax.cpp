#include <stdio.h>

float calculatetax(float gross_salary);

int main()
{
float result,gross_salary,net_salary;
 printf("enter your gross_salary:\t");
 scanf("%f",&gross_salary);
 
 result=calculatetax(gross_salary);
net_salary=gross_salary-result; 
 
 printf("\n");
 printf("---tax program---");
 printf("gross salary.ksh%f\n",gross_salary);
 printf("tax deducted.ksh%f\n",result);
 printf("final salary.ksh%f\n",net_salary);
 
 return 0;
}

float calculatetax(float gross_salary){
float tax;
if(gross_salary<30000){
tax=0.05*gross_salary;
}
else if(gross_salary>=30000 && gross_salary<=59999){
tax=0.1*gross_salary;
}
else if(gross_salary>=10000){
tax=0.15*gross_salary;
}

return tax;
}