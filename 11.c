//Write a c program to print first n natural numbers using while loop.
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    i = 1;
    while(i <= n)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
