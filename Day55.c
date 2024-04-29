#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer n:");
    scanf("%d", &n);
    if(n&1)
        printf("The LSB of %d is set(1).", n);
    else
        printf("The LSB of %d is not set(o)", n);
    return 0;
    
}
