//Write a program to find Number of days in a given month of a given year
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of the month: ");
    scanf("%d", &n);
    int max_days[]={ 1, 3, 5, 7, 8, 10, 12};
    int min_days[] = {4, 6, 9, 11};
    for(int i = 0; i<7; i++){
        if(n == max_days[i]){
            printf("The number of days in the given months is 31");
            break;
            i=8;
        }
        
    }
    for(int i = 0; i<4; i++){
        if(n == min_days[i]){
            printf("The number of days in the given month is 30");
            break;
            i=5;
        }
        
    }
    
    if(n==2){
        printf("The number of days in the given month is 28 and in leap year it is 29.");
    }
    return 0;
    }
