//Write a program to find Permutations in which n people can occupy r seats in a classroom.
#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n, r;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("ENter the number of seaats: ");
    scanf("%d", &r);
    int p = factorial(n)/(factorial(n-r));
    printf("Total possible arrangements are %d",p);
    return 0;
}
