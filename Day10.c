//Write a program to find Area of a rectangle.
#include<stdio.h>
int main()
{
    float l, b; // input is taken in float for the accurate output
    float area;
    printf("Enter the value of length and width: ");
    scanf("%f %f",&l,&b);
    area = l*b;
    printf("The area of the given Rectangle is: %f", area);
    return 0;
}
