#include<stdio.h>
int main(){
// question no.1 which of the following is valid in C?

//int a;, b=a;  valid
//int v=3^3; valid
//char dt = 21 dec 2020;  invalid 

// question no.2 what data type will 3.0/8-2 return?
//float d = (3.0/8-2);
//printf("%f/n", d); // double or float.
// question no.3 write program to check whether a number is divisible by 97 or not ?
int num;
printf(" enter the number \n");
scanf("%d, &num");
printf("divsibility test returns : %d\n", num%97);
// question no.4 explain step by step evaluation of 3*x/y-zk 
//where x=2,y=3,z=3,k=1                                                                                           

int x=2, y=3 , z=3, k=1 ;
int result = 3 * x / y - z + k;

// 6/3-3+1
// 2-3+1
// 0
printf("the value of result is %d", result);


return 0;




}