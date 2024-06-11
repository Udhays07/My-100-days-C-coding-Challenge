//Write Program to count distinct elements of an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], arr1[n], temp=1;
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr1[0] = arr[0];
    for(int i=0; i<n; i++){
        int found = 0;
        for(int j=0; j<temp; j++)
        {
            if(arr1[j] == arr[i]){
                found = 1;
                break;
            }
        }
        if (!found){
            arr1[temp]= arr[i];
            temp++;
        }
    }
    printf("Number of distinct elements in the array: %d", temp);
    printf("\nThe distinct elements are: ");
    for(int i=0; i<temp; i++){
        printf("%d ", arr1[i]);
    }
    return 0;
}
