//Write a Program to print Length of the string without using strlen() function
#include<stdio.h>
int main()
{
    int i=0, len=0;
    char s1[100];
    printf("Enter an string: ");
    scanf("%s", s1);
    for(i=0; s1[i]!='\0';i++){
        len++;
    }
    printf("Length of the given string is %d", len);
    return 0;
}
