#include<stdio.h>
int main()
{
int age;
int vippass=0;
//vippass=1;
printf("enter your age\n");
scanf("%d", &age);
//if(age>=18 && age<=70)

if((age>=18 && age<=70) || vippass==1)  // the || is stand for OR statment
//and ! is stand for NOT  statment



{
printf("your are 18 and you are below 70 , you can drive\n");


}


else{
printf("you cannot drive\n");

}






return 0;
}