//Write a program to find Factorial of a number.
#include<stdio.h>
int main()
{
    int i, n, fact=1;
    printf("Enter a integer n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) //from 1 to n the product will be stored in the fact 
    {
        fact=fact*i;
    }
    printf("The factorial of the given number is: %d",fact);
    return 0;

}
