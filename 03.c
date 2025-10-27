//Write a c program to add 2 numbers entered by the user and display the result
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}