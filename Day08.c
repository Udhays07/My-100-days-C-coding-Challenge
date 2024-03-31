//Write a program to identify if the number is even or odd.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter an integer i: ");
    scanf("%d", &i);
    i=i%2;
    if(i&1)
    {
        printf("The given number is odd");
    }
    else
    {
        printf("The given number is Even");
    }
    return 0;
}
