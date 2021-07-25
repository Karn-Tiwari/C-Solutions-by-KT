#include <stdio.h>
int main()
{
    int x = 2;
    int y = 3;
    printf("the value of 8*x - 6*y is %d\n", 8*x - 6*y);

    printf("the value of 8*y/3*x is &d\n", 8*y/3*x);
    // the value of 8*x/3*y is 24 is wrong
    //because there is no bodmas rule applicable in programming
// 24/3*2
//8*2
//16


    return 0;
}
