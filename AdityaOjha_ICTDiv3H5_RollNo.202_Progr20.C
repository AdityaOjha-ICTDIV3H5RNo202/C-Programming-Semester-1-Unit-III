#include <stdio.h>
void main()
{
    int i,sum=0;
    for (i=1;i<=100;i++)
    {
        if (i%3==0)
        {
                sum=sum+i;
        }
    }
    printf("Sum of the numbers divisible by 3 between 1 to 100 is: %d\n",sum);
}
