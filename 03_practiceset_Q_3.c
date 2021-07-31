//calulate the income tax paid by the employe 
//the government as per slab mention below :
//income slab                tax
//2.5L to 5.0L                 5%
//5.0L to 10.0L                  20% 
//above 10L                  30%  

 //Note that there is no tax below 2.5L .
//Take income amount as an input from the user.
#include<stdio.h>
int main()
{ float tax=0 , income;
printf("enter your income\n");
scanf("%f",&income);

if(income>=250000 && income<=500000)
{tax = tax + 0.05 * (income - 250000);}

if(income>=500000 && income<=1000000)
{tax = tax + 0.02 * (income - 500000);}

if(income>=1000000)
{tax = tax + 0.03 * (income - 1000000);}

printf("your net income tax to be paid by 26th january of this month is %f\n", tax);


    return 0;
}