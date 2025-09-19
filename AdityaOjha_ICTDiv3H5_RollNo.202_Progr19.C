#include <stdio.h>
void main()
{
    int i;
    for (i=1;i<=100;i++)
    {
        if (i%5==0)
        {
            printf("The numbers divisible by 5 between 1 to 100 are: %d\n",i);
        }
    }
}
