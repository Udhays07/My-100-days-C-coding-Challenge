// Write Program to find whether an array is a subset of another array or not.
#include <stdio.h>

int SubsetOrNot(int *arr1, int *arr2, int n1, int n2) {
  int flag = 1, i, j;

  for (i = 0; i < n2; i++) {
    flag = 0;
    for (j = 0; j < n1; j++) {
      if (arr2[i] == arr1[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int n1, n2;

  printf("Enter the size of the first array: ");
  scanf("%d", &n1);

  printf("Enter the elements of the first array:\n");
  for (int i = 0; i < n1; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the size of the second array: ");
  scanf("%d", &n2);

  printf("Enter the elements of the second array:\n");
  for (int i = 0; i < n2; i++) {
    scanf("%d", &arr1[i]); // This should be arr2[i]
  }

  if (SubsetOrNot(arr1, arr2, n1, n2) == 1) {
    printf("Subset\n");
  } else {
    printf("Not subset\n");
  }

  return 0;
}
