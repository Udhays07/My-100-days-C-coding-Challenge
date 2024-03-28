#include <stdio.h>
void max(int a,int b){
    if(a>b){
        printf("Greatest number is %d",a);
    }
    else if (a==b){
        printf("Both are equal");
    }
    else{
        printf("Greatest number is %d",b);
    }
}
int main()
{
    int num1,num2;
    printf("Enter two integers:");
    scanf("%d %d",&num1,&num2);
    max(num1,num2);
    return 0;
}

