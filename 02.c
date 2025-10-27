//Write a c program to take a variable int and input the value from the user and display it.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Entered number = %d", a);
    return 0;
}