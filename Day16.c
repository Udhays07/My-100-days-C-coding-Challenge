//Write a program to find LCM of two numbers.
#include<stdio.h>
int main()
{
    int a, b, max, flag=1;
    printf("Enter an integer a and b: ");
    scanf("%d %d", &a, &b);
    max=(a>b) ? a : b;
    while(flag)
    {
        if (max%a==0 && max%b==0)
        {
            printf("The LCM of %d and %d is %d.", a,b,max);
            break;
        }
        ++max;
    }
    
}
