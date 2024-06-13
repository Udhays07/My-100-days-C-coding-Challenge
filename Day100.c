// Write Program to find repeating elements in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], arr1[n], temp=0, arr2[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        arr2[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        if(arr2[i] == 0)
        {
            int flag = 0;
            for(int j=0; j<n; j++)
            {
                if(arr[i] == arr[j] && i != j)
                {
                    flag++;
                    arr2[j] = 1;
                }
            }
            if(flag > 0)
            {
                arr1[temp]=arr[i];
                temp += 1;
            }
        }
    }
    if(temp>0){
        printf("The Repeating elements from the array: ");
        for(int i=0; i<temp; i++)
            printf("%d ", arr1[i]);
    }
    else
        printf("There is no Repeating elements in the array");
        
    return 0;
}
