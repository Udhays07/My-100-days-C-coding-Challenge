//Write a program to find Power of a number.
#include<stdio.h>
int main()
{
    int n, power, product=1;
    printf("Enter a number n and it's power respectively: ");
    scanf("%d %d",&n, &power);
    for(int i=1; i<=power; i++)
    {
        product = product * n;
    }
    printf("The Power of given number = %d", product);
    return 0;
}
