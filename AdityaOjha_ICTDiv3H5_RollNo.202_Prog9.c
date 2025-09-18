#include <stdio.h>
void main()
{
    int i,n,num,sum;
    printf("Enter total number of odd numbers to be added: ");
    scanf("%d",&n);
    sum=0;
    num=1;
    for (i=1; i<=n; i++)
    {
        sum=sum+num;
        num=num+2;
    }
    printf("The sum of first %d odd numbers is: %d",n,sum);
}
