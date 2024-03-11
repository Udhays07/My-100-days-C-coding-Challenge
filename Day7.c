//Write a program to identify of the a number is positive or negative.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    if(i<0)
    {
        printf("Negative Number");
    }
    if(i>0){
        printf("Positive number");
    }
    if(i==0){
        printf("Zero");
    }
    return 0;
}
