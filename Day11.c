//Write a program to find Area of a Triangle.
#include<stdio.h>
int main()
{
    float h, b, area;
    printf("Enter the value of height and base of triangle: ");
    scanf("%f %f", &h, &b);
    area = (0.5)*h*b;
    printf("The area of the triangle is %f",area);
    return 0;
}
