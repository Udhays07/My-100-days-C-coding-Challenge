//Write a program to Add two fractions
#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, divisor;
    printf("Enter integers x1, y1(x1/y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter integers x2, y2(x2/y2): ");
    scanf("%d %d", &x2, &y2);
    
    //calculate the numerator
    x3=(x1*y2)+(x2*y1);
    
    //calculate the denominator
    y3=(y1*y2);
    
    //simlify if its complex
    if(x3>y3)
    {
       divisor=y3; 4 
    }
    else{
        divisor=x3;
    }
    
    for(int i=divisor; i>0; i--)
    {
        if(x3%i==0 && y3%i==0)
        {
            x3=x3/i;
            y3=y3/i;
        }
    }
    printf("The sum of two given fraction number is %d/%d", x3, y3);
    return 0;
}
