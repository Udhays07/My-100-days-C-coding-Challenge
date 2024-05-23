//Write a C Program to find Triplets with a given sum.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n], sum, a=0;
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum of the triplets: ");
    scanf("%d", &sum);
     for (int i = 0; i < n - 2; i++){
         for (int j = i + 1; j < n - 1; j++)
         {
             for (int k = j + 1; k < n; k++)
             {
                 if (arr[i] + arr[j] + arr[k] == sum)
                 {
                     printf("Triplets for the given sum are: (%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                     a += 1;
                 }
             }
	    }
    }
    if(a==0)
        printf("No triplets for the given sum in the array");
    return 0;
}
