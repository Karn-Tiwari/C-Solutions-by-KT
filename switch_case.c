#include<stdio.h>
int main()
{int rating;
printf("enter rating");
scanf("%d",&rating);
switch(rating){
case 1 :
printf(" your rating 1\n");
break;
case 2 :
printf(" your rating 2\n");
break;

case 3:
printf(" your rating 3\n");
break;

case4:
printf(" your rating 4\n");
break;

case 5:
printf(" your rating 5\n");
break;

deafault :
printf("invalid rating\n");
break;
}

    return 0;
}