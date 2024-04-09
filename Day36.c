//Write a program to calculate Maximum number of handshakes
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the  number of person in an room: ");
    scanf("%d", &x);
    y = ((x-1)*x)/2;
    printf("Maximum number of handshakes: %d", y);
    return 0;
    
}
