#include <stdio.h>
void main()
{
    int l,s,i=0,arr[1000];
    printf("Enter number: \n");
    for (i=0;i<1000;i++)
        {
            scanf("%d",&arr[i]);
        }
    l=arr[0];
    s=arr[0];
    for (i=0;i<=999;i++)
        {   
            if (arr[i]>l)
            {
                    l=arr[i];
            }
            else if (arr[i]<s)
            {
                    s=arr[i];
            }
        }        
    printf("The largest and smallest numbers within given 100 numbers are: %d and %d",l,s);
}
