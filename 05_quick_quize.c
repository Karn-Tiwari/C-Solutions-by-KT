/*QUICK QUIZE: write a program to print first n natural numbers using do while loop*/
#include<stdio.h>
int main()
{
int i=1;
int n;
printf("enter a number n\n");
scanf("%d",&n);

do{
    printf("the number  is %d\n",i);
    i++;
}
while(i<n);

    return 0;
}