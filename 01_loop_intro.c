//while loop :pehle check the condition then execute  (IMPORTANT)
//do while loop : pehle execute then check the condition  (IMPORTANT)

#include<stdio.h>
int main()
{int a=1;
// loops are used to repeat similar part of code snippet efficiently
//printF("%d\n",a);
//a++)=---> 100 times
scanf("%d" , &a);
while(a<20){
    printf("%d\n", a);
    a++;
}

    return 0;
}