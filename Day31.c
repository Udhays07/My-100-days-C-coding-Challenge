//Write a program to express a number as a sum of two prime numbers?
#include<stdio.h>
int prime(int a)
{
    int y, isprime = 1;
    y=a/2;
    for(int x=2; x<=y; x++)
    {
        if(a%x==0){
            isprime = 0;
            break;
        }
    }
    return isprime;
}
int main()
{
    int n, flag=0, m;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(prime(i)){
            if (prime(n-i)==1){
                printf("%d as a sum of two prime numbers can be expressed as %d + %d\n",n, i, n-i );
                flag = 1;
            }
        }
    }
    if(flag==0){
        printf("%d cannot be expressed as sum of two prime numbers", n);
    }
    
}
