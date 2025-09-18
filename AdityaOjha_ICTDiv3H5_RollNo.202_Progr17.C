#include <stdio.h>
int main()
{
    int i,p=0,n=0,z=0;
    int arr[200];   
    printf("Enter 200 numbers:\n");
    for (i=0;i<200;i++) 
    {
        scanf("%d",&arr[i]);

        if (arr[i]>0)
            p++;
        else if (arr[i]<0)
            n++;
        else
            z++;
    }
    printf("Total +ve, -ve, and zeroes in the given numbers are: %d %d %d\n",p,n,z);

}
