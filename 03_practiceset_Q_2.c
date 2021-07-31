//question- write a program to find out whether a student pass or fail,
//and if it requires 40% but atleast 33% in each subject to pass.
//assume 3 subject and take marks as input to the user.



#include<stdio.h>
int main ()
{ 
    int physics , chemistry , maths;
    float total;

printf("enter physics marks\n");
scanf("%d",&physics);

printf("enter chemistry marks\n");
scanf("%d",&chemistry);

printf("enter  maths marks\n");
scanf("%d",&maths);

total = (physics + chemistry + maths)/3;
if((total>40) || physics<33 || chemistry<33 || maths<33)
{
   printf("your total percentage is %f and your are pass\n", total);
}

  else{ printf("your total percentage is %f and your are fail\n", total);
  }
  
    return 0;

}