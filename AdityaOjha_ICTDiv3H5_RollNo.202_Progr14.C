#include <stdio.h>
void main()
{
    int i=0;
    float arr[10],sum=0.0,mean=0.0;
    printf("Enter 10 numbers: \n");
    for (i=0;i<10;i++)
        {
            scanf("%f",&arr[i]);
        }
    for (i=0;i<10;i++)
        {   
            sum=sum+arr[i];
            mean=sum/10;
        }        
    printf("The mean of the values is: %f",mean);
}
