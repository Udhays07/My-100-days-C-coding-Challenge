//Write a program to find Fibonacci series up to n.
#include<stdio.h>
int main()
{
    int a=0, b=1 , c , n, fact;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("%d %d",a, b);
    for(c=2;c<n;++c)
    {
        fact=a+b;
        printf(" %d ",fact);
        a=b;
        b=fact;
    }
    return 0;
}
