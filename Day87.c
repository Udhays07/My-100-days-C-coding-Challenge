// Write Program to find minimum scalar product of two vectors
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the vector: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements of the vector 1: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the vector 2: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }
    int temp = n;
    int sum=0;
    n = n-1;
    for(int i=0; i<temp; i++)
    {
        int product = arr1[i]*arr2[n];
        sum = sum + product;
        n--;
    }
    printf("The minimum scalar product of the two vectors is %d", sum);
    
    return 0; 
}
