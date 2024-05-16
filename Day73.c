//Write a Program to check if two strings are Anagram or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter string 1: ");
    fgets(str1, 100, stdin);
    printf("Enter string 2: ");
    fgets(str2, 100, stdin);
    int count1=0, count2=0;
    for(int i=0; str1[i] != '\0'; i++)
    {
        count1 += 1;  
    }
    for(int i=0; str2[i] != '\0'; i++)
    {
        count2 += 1;  
    }
    
    if(count1 == count2)
        printf("The given two strings are Anagram");
    else
        printf("The given two string are not an Anagram");
        
    return 0;
}
