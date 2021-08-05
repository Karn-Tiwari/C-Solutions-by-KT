/* i++ ka matlab pehle print karo phir increament karo 
and ++i ka matlab pehle increament karo phir print karo*/
/* i-- ka matlab pehle print karo phir decreament karo
   --i ka matlab pehle decreament karo phir print karo*/

#include<stdio.h>
int main()
{int i=5;
printf("the value after i++ is  %d\n", ++i);
i++;
++i;
printf("the value i is %d\n",i);  // remember in exam in calculating the total increament

// +++ operator nhi hota hai
i+=10;
printf("the value of i is %d\n",i);


    return 0;
}