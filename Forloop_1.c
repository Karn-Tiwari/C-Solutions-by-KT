#include <stdio.h>
int main()
{
    int p, n, count;
    float r, si;
    for (count = 1; count <= 3; count = count + 1)
    {
        printf("Enter the value of p , n , r");

        scanf("%d %d %f\n", &p, &n, &r);

        si = p * n * r / 100;

        printf("Simple Interest =Rs %f\n", si);
    }
    return 0;
}