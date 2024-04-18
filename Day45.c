//Write a program for Decimal to octal conversion
#include<stdio.h>
int main()
{
    int decimal, octal[50], i=0, j;
    printf("Enter an decimal number: ");
    scanf("%d", &decimal);
    printf("The Octal number of given decimal number is: ");
    while(decimal){
        octal[i] = decimal%8;
        decimal = decimal/8;
        // printf("%d",octal);
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d", octal[j]);
    }
    return 0;
    
}
