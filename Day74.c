// Write a Program to Count common subsequence in two strings
#include <stdio.h>
#include <string.h>
int sequences(char str1[], char str2[])
{
   int c1 = strlen(str1);
   int c2 = strlen(str2);
   int count[c1+1][c2+1];
   for (int i = 0; i <= c1; i++)
   {
      for (int j = 0; j <= c2; j++)
      {
        count[i][j] = 0;
      }
   }
   for (int i = 1; i <= c1; i++)
   {
      for (int j = 1; j <= c2; j++)
      {
         if(str1[i-1] == str2[j-1])
         {
            count[i][j] = 1 + count[i][j-1] + count[i-1][j];
         }
         else
         {
            count[i][j] = count[i][j-1] + count[i-1][j] - count[i-1][j-1];
         }
      }
   }
   return count[c1][c2];
}
int main()
{
    char str1[10] ,str2[10];
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    printf("Number of subsequence is: %d ",sequences(str1, str2));
    return 0;
}
