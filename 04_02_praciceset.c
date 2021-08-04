//write a program to calculate teh factorial of given number using a for loop
#include<stdio.h>
int main(){
int i , n=7, factorial=1;
for(i=1; i<n; i++)
{ factorial = factorial*i;}
printf("the value of factorial of %d is %d", i, factorial);


return 0;
}