#include<stdio.h>
int main()
{
   // while(1){ //while loop can be initialised to get infinite input from the user and get the ASCII value 
    char c;
    printf("Enter a character: ");
    scanf(" %c",&c);
    printf("The ASCII Value of the character %c is %d \n",c,c);
    //}
    return 0;
}
