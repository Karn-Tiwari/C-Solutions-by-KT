//write a program to determine whether a character entered by 
//the user is lowercaqse or not
// Note - 97 to 122 for a-z

#include<stdio.h>
int main()
{
char ch;
printf("enter the character\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122){
printf("it is lowercase\n");
}
else{
    printf("it is not lowercase\n");
}






    return 0 ;
}