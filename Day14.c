//Write a program to find Sum of numbers in a given range.
#include<stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    while(a<=b)
    {
        sum = sum + a;
        a++;
    }
    printf("The some of integers between the given range is %d", sum);
    return 0;
}
