//Write Program to find whether Arrays are disjoint or not
#include<stdio.h>
int main()
{
    int n1, n2, a=0;
    printf("Enter the size of array 1: ");
    scanf("%d", &n1);
    printf("Enter the size of array 2: ");
    scanf("%d", &n2);
    int arr2[n2], arr1[n1], temp[10];
    printf("Enter the elements of the array 1: ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the array 2: ");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                a += 1;
                temp[a-1]=arr1[i];
                break; 
            }
        }
    }
    if(a>0){
        printf("The given arrays are not disjoint. Common elements are: ");
        for(int i=0; i<a; i++)
            printf("%d ", temp[i]);
    }
    else
        printf("The given arrays are disjoint");
        
    return 0;

    
}
