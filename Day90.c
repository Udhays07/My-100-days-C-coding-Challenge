// Write Program to for sorting the elements of an array
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
    printf("Elements before array sorting: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);   
    }
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nElements of the sorted array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);   
    }
}
