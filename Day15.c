//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n, reverse, a;
    printf("Enter an integer n: ");
    scanf("%d",&n);
    while(n!= 0)
    {
        a=n%10;
        reverse = reverse *10 + a;
        n=n/10;
    }
    printf("The reversed version of the given integer is %d", reverse);
    return 0;
}
