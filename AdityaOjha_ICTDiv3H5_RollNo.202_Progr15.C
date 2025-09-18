#include <stdio.h>
void main()
{
    int n,i;
    float sum=0, mean;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    float arr[n];
    printf("Enter %d numbers:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    mean=sum/n;
    printf("The mean of the values is: %.2f\n",mean);
}
