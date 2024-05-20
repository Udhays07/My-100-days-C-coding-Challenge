//Write Program to check if two arrays are the same or not
#include<stdio.h>
int getarray(int n, int arr[]){
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);   
    }
}
int isequal(int n1, int n2, int arr1[], int arr2[])
{
    int count=0;
    if(n1==n2){
        for(int i=0; i<n1;i++)
        {
            if(arr2[i]==arr1[i])
                count =0;
            else{
                count =1;
                break;
            }
        }
        if(count!=1)
            printf("Both the arrays are equal");
        else
            printf("Both the arrays are not equal");
    }
    else
        printf("Both the arrays are not equal");
}
int main()
{
    int n1, n2;
    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    int arr1[n1], arr2[n2];
    printf("Enter the arr1: ");
    getarray(n1, arr1);
    printf("Enter the arr2: ");
    getarray(n2, arr2);
    isequal(n1, n2, arr1, arr2);
    
    return 0;
    
}
