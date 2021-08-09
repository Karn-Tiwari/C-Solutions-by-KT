 #include<stdio.h>
 # define N 15

 int main(){
 int a[N] , i;
 for ( i = 0; i <N; i++)

 {
    printf("Enter the input for an index %d:", i);
    scanf("%d\n",&a[i]);

 }
 printf("Array elements are as follows:\n");
 for ( i = 0; i <N; i++)
 {
printf("%d\n",a[i]);
 }
 
 return 0;
 }