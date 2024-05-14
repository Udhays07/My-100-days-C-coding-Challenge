//Write a Program to calculate the Frequency of characters in a string
#include<stdio.h>
int main()
{
    char str[100], ch;
    printf("Enter an string: ");
    gets(str);
    printf("Enter a character to know it's Frequency: ");
    scanf("%c", &ch );
    int count=0;
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i] == ch)
            count+=1;
    }
    printf("The frequency of the character %c in the given string is %d", ch, count);
    return 0;
}
