//Write C program to find missing elements of a range
#include<stdio.h>
int main()
{
    int n,i,sum=0,c,start,end,noMissing=0;
    printf("\nEnter number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements in array:\n",n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter Start and End values:\n");
    scanf("%d\n%d",&start,&end);
    printf("\nMissing elements in a range of %d to %d :\n",start,end);
    while(start<=end)
    {
    	c=0;
    	for(i = 0;i < n;i++)
    	{
    		if(start==a[i])
    		{
    			c=1;
    			break;
			}
		}
		if(c==0)
		{
			printf("%d ",start);
			noMissing=1;
		}
		start++;
	}
	if(noMissing==0)
		printf("\nThere are no missing elements in a given range");
}
