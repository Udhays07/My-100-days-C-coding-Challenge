//Write a C Program to find sum of positive square elements in an array
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sumPositive(int n,int *a){
   int i,sum=0,m;
   for(i=0;i<n;i++){
      m=sqrt(*(a+i));
      if(pow(m,2)==*(a+i)){
         sum+=*(a+i);
      }
   }
   return sum;
}
int main(){
   int i,*a,n;
   printf("Enter the size of array:
");
   scanf("%d",&n);
   a=(int*)malloc(n*sizeof(int));
   printf("Enter the elements of array:
");
   for(i=0;i<n;i++){
      scanf("%d",a+i);
   }
   printf("Sum of positive square elements is %d",sumPositive(n,a));
   return 0;
}
