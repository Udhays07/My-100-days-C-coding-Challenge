//Write C Program to find the array type
#include<stdio.h>
int main()
{
    int n, odd=0, even=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 != 0)
            odd += 1;
        else if (arr[i]%2 == 0)
            even += 1;
    }
    if(odd == n)
        printf("The array have odd Numbers");
    else if (even == n)
        printf("The array have even Numbers");
    else
        printf("The array have mixed Numbers");
}
