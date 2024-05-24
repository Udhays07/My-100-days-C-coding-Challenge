//Write a C Program to find number of even and odd elements in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int odd=0, even=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0 && arr[i]>0)
            even += 1;
        else if(arr[i]%2 != 0 && arr[i]>0)
            odd += 1;
        else if(arr[i]);
    }
    printf("No of odd numbers: %d\nNo of even numbers: %d\n", odd, even);
    
    return 0;
}
