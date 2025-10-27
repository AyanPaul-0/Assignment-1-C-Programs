//Write a c program to check whether a number is an Armstrong number or not.
#include<stdio.h>
int main()
{
    int n, temp, rem, sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
