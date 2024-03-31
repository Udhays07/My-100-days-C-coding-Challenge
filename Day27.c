//Write a program to identify if the number is Prime number or not.
#include<stdio.h>
int main()
{
    int n,i,m,flag;
    printf("Enter an integer: ");
    scanf("%d", &n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0){
            printf("%d is not prime number",n);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is prime number",n);
    }
    return 0;
    
}
