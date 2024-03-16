//Write a program to find Sum of digits of a number.
#include<stdio.h>
int main()
{
    int a, sum, b;
    printf("Enter an number: ");
    scanf("%d", &a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("Sum of digits is %d", sum);
    return 0;
}
