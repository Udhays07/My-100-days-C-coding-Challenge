// /Write a Program to Capitalize the first and last letter of each word of a string
#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main() 
{
  char str[100] ;
  printf("Enter a string: ");
  gets(str);
  int length = 0;
  
  length = strlen(str);
  for(int i=0;i<length;i++)
  {
      if(i==0||i==(length-1))
      {
          str[i]=toupper(str[i]);
      }
      else if(str[i]==' ') 
      {
          str[i-1]=toupper(str[i-1]);
          str[i+1]=toupper(str[i+1]);
      }
  }
  
  printf("String after capitalizing first and last letter of each word: %s", str);
  return 0;
}
