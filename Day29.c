//Write a program to print prime numbers in a given range
#include<stdio.h>
void prime(int x, int y)
{
    int m;
    printf("Prime numbers between the given integers are:");
    while(x<=y)
    {   
        int flag = 0;
        if(x==1)
            x = 2;
        m=x/2;
        for(int i=2; i<=m; i++)
        {
            if( x%i==0){
                flag ++;
                break;
            }
            
        }
        if(flag==0){
            printf(" %d,", x);
        }
        x++;
    }
}

int main()
{
    int a, b;
    printf("Enter two integers a, b: ");
    scanf("%d %d",&a, &b);
    prime(a,b);
}
