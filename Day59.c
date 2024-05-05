//Write a Program to compare two strings.
#include<stdio.h>
int main()
{
    char s1[20];
    char s2[20];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    int n=0, flag=0;
    while(s1[n]!='\0' && s2[n]!='\0'){
        if(s1[n] != s2[n]){
            flag =1;
            break;
        }
        n++;
    }
    if(flag)
        printf("Both the strings are not equal\n");
    else
        printf("Both the strings are equal\n");
}
