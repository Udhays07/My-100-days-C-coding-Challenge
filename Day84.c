#include <stdio.h>

int main() {
    int size, sum=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        sum+=arr[j];
    }
    printf("The sum of elements of the array is %d",sum);

    return 0;
}
