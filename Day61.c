//Write a Program to Toggle each character in a string
#include<stdio.h>
#define max_size 100
void togglecase(char *str);
int main()
{
    char s1[max_size];
    printf("Enter an string: ");
    gets(s1);
    printf("String before Toggling case: %s\n", s1);
    togglecase(s1);
    
    printf("String after Toggling case: %s", s1);
    
    return 0;
}

void togglecase(char*str){
    int i=0;
    while( str[i] != '\0' ){
        if(str[i]>='a'&& str[i]<='z')
            str[i] = str[i] -32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] +32;
        i++;
    }
}
