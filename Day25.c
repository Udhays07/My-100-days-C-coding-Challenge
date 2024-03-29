//Write a program to find Greatest of three numbers.
#include<stdio.h>
void max(int a, int b, int c)
{
   if(a>=b && a>=c){
       printf("%d is greatest of three numbers", a);
   }
   else if(b>=a && b>=c){
       printf("%d is greatest of three  numbers", b);
   }else if (c>=a && c>=b){
       printf("%d is greatest of three numbers", c);
   }else if(a==b && b==c){
       printf("All the three numbers are equal");
   }
}
int main()
{
    int num1, num2, num3;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max(num1, num2, num3);
    return 0;
}
