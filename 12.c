//Write a c program to print all the odd numbers in a given range
#include<stdio.h>
int main()
{
    int start, end, i;
    printf("Enter start and end values: ");
    scanf("%d%d", &start, &end);
    for(i=start; i<=end; i++)
    {
        if(i%2 != 0)
            printf("%d ", i);
    }
    return 0;
}
