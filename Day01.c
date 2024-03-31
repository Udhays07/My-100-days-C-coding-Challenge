//Write a program to identify if the character is a vowel or consonant
#include<stdio.h>
int main(){
    char c;
    int upper, lower;
    printf("Enter a character: ");
    scanf("%c", &c);
    upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'); //will check whether the given character is vowel in upper case and return 1 or 0
    lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'); //will check whether the given character is vowel in lower case and return 1 or 0
    if(upper||lower){
        printf("The given character is Vowel");
    }else
        printf("The given character is a consonant");
    return 0;
}
