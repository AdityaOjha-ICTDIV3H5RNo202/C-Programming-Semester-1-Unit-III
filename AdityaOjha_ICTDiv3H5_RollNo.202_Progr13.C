#include <stdio.h>
void main()
{
        int sum=0,num=1;
        while (num>=1 && num<=100)
        {   
            if (num%13==0)
            {
                sum=sum+num;   
            }
            num++;
        }
        printf("The sum of all numbers divisible by 13 in range 1 to 100 is: %d",sum);
}
