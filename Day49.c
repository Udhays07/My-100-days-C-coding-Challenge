//Write a program to find roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter 3 float for quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b*b)-(4*a*c);
    if(d>0){
        r1 = -b+ sqrt(d)/(2*a);
        r2 = -b- sqrt(d)/(2*a);
        printf("\nThe real roots are, %f and %f", r1, r2);
    }
    else if(d == 0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("Roots are equal, %f and %f", r1, r2);
    }
    else
        printf("Roots are imaginary");
    
    return 0;
}
