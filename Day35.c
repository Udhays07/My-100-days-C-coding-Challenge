#include<stdio.h>

int main()

{

    int rows;

    printf("Enter the row number:");

    scanf("%d",&rows);

    for(int i=0;i<=rows;i++)

    {

        for(int k=i;k<=rows;k++)

        printf(" ");

        for(int j=1;j<=i;j++)

        printf("%d",j);

        for(int j=i-1;j>0;j--)

        printf("%d",j);

    printf("\n");

    }

}
