//question : write a program to find a grade
//of student givem his marks baesd on below ??
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks(0-100): ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Plz enter your marks in between [0,100]\n");
    }
    else if(marks>=91 && marks<100)
    {
        printf("Grade O - Outstanding performance!");
    }
    else if(marks>=81 && marks<91)
    {
        printf("Grade A");
    }
    else if(marks>=71 && marks<81)
    {
        printf("Grade B");
    }
    else if(marks>=61 && marks<71)
    {
        printf("Grade C");
    }
    else if(marks>=51 && marks<61)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F - Failed...");
    }
    return 0;
}
