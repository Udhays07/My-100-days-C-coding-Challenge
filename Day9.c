//Write a program to find Area of a circle.
#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter the Radius of circle: ");
    scanf("%d", &r);
    area = (3.141)*r*r;
    printf("The area of the given circle is: %f", area);
    return 0;
}
