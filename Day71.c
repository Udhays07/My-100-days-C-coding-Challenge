//Write a Program to print non-repeating characters in a string
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Non repeating characters in the string are: ");
    for(int i=0; str[i]!='\0'; i++)
    {
        int count=0;
        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
                count += 1;
        }
        if(count==1)
            printf("%c", str[i]);
    }
    return 0;
}
