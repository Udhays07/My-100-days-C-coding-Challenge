//Write a program to identify if the character is an alphabet or not 

#include<stdio.h>
int main()
{   while(1){
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    int i=c;
    if((i>=65 && i<=90) || (i>=97 && i<=122)){
        printf("The given character is an alphabet\n");
    }
    else
       printf("The given character is not an Alphabet\n");
    }
}
