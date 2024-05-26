//Write a C Program for basic array operations (Insert, delete and search an element)
#include<stdio.h>
int insert(int arr[], int n);
int delete(int arr[], int n);
int search(int arr[], int n);
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
    int fun;
    printf("Enter the operation to be done with this array(Insert(1)/delete(2)/search(3)) : ");
    scanf("%d", &fun);
    if(fun == 1)
        insert(arr, n);
    else if(fun == 2)
        delete(arr, n);
    else if(fun == 3)
        search(arr, n);
    else
        printf("There is no such function.");
        
    return 0;
    
}
int insert(int arr[], int n)
{
    int ind;
    printf("Enter the index of the element to be inserted: ");
    scanf("%d", &ind);
    int element;
    printf("Enter the element to bne inserted: ");
    scanf("%d", &element);
    for (int i = n - 1; i >= ind; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[ind] = element;
    n++;
    printf("The array after insertion is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
int delete(int arr[], int n){
    int index;
    printf("Enter the index of the array to deleted: ");
    scanf("%d", &index);
    for(int i=0; i<n; i++){
        if(i != index){
            printf("%d ", arr[i]);
        }
    }
    
}
int search(int arr[], int n){
    int element, ct=0;
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == element){
            printf("The index of the searched element is %d", i);
            ct = 2;
            break;
        }
    }
    if(ct == 0)
        printf("There is no such element in the array");
}
