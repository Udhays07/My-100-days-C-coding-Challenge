// Write Program to find longest palindrome in an array
#include <stdio.h>  
int main()  
{
    int n, i , j, temp, rem, num;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements of the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           if(arr1[i]>arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(i=n; i>=0; i--)
    {
        num = 0;
        temp = arr1[i];
        while(arr1[i]!=0)
        {
            rem = arr1[i] % 10;
            num = num*10 + rem;
            arr1[i] = arr1[i]/10;
        }
        if(num==temp)
        {
            printf("Longest palindrome present is %d",num);
            break;
        } 
    }   
    if(i==-1)
    {
            printf("There is no palindrom number");
    }
    return 0;
} 
