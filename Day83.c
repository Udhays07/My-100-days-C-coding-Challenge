// Write a C Program to find smallest and largest element in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=max)
            max = arr[i];
        if(arr[i]<=min)
            min = arr[i];
    }
    printf("Largest element of the array: %d", max);
    printf("\nSmallest element of the array: %d", min);
    
    return 0;
}
