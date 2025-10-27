 //Write a c program to calculate the area and perimeter of a circle.

#include<stdio.h>
int main()
{
    float r, area, peri;
    printf("Enter radius: ");
    scanf("%f",&r);
    area = 3.14 * r * r;
    peri = 2 * 3.14 * r;
    printf("Area = %.2f\nPerimeter = %.2f", area, peri);
    return 0;
}
