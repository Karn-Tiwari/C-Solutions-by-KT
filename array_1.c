// write a program to print the array in reverse order
#include <stdio.h>
int main()
{
    int a[9] = {34, 54, 56, 76, 8, 91, 6, 9, 7};
    int i;
    // Original order
    for (i = 0; i < 9; i++)
    {
        printf("%d", a[i]);
        return 0;
    }
    printf("\n");
    // Reverse order
    for (i = 8; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}
