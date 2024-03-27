//Write a program to identify if the number is Armstrong number or not
#include<stdio.h>
int main()
{
    int n,r,temp, sum=0;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is an Armstrong number", temp);
    }else
    {
        printf("The given number is not an Armstrong number");
    }
    return 0;
}
