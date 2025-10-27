//Write a c program to print the fibonacci series in a given range.
#include<stdio.h>
int main()
{
    int n, f0=0, f1=1, f;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("%d %d ", f0, f1);
    f = f0 + f1;
    while(f <= n)
    {
        printf("%d ", f);
        f0 = f1;
        f1 = f;
        f = f0 + f1;
    }
    return 0;
}
