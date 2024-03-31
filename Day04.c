//Write a program to find Number of digits in an integer.
#include<stdio.h>
int main()
{
    int N;
    int count=0;
    printf("Enter an integer N: ");
    scanf("%d", &N);
    while(N>0)
    {
        count++;
        N = N/10;
    }
    printf("The number of digits in the given integer is %d",count);
    return 0;
}
