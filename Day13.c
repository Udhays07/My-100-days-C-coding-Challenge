//Write a program to find Sum of N natural numbers.
#include<stdio.h>
int main()
{
    int n, i=1, sum;
    printf("Enter an integer n: ");
    scanf("%d",&n);
    while(i<=n)
    {   
        sum += i;
        i++;
    }
    printf("The sum of the n natural numbers is %d",sum);
    return 0;
}
