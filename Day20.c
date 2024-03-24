//Write a program to find the Factors of a number.
#include<stdio.h>
int main()
{
    int n, i=1;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    printf("\nThe factors of the given number are: ");
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            printf(" %d,",i);
        }
    }
    return 0;
}
