//Write a program to identify if the number is Perfect number or not.
#include<stdio.h>
int main()
{
    int n, rem, sum=0, i;
    printf("Enter an integer n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("\nThe given number is perfect number");
    }
    else
    {
        printf("\nThe given number is not a perfect number");
    }
    return 0;
}
