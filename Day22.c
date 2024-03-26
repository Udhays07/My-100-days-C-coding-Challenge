//Write a program to find GCD of two numbers.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter integers a, b: ");
    scanf("%d %d", &a, &b);
    while(a != b)
    {
        if(a>b)
        {
            a -= b;
        }
        else{
            b -= a;
        }
        
    }
    printf("GCD of the given 2 integers are %d",a );
    return 0;
}
