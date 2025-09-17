#include <stdio.h>
#include <conio.h>
void main()
{
	int num,i,n,sum;
	sum=0;
	num=0;
	clrscr();
	printf("Enter total even numbers to be summed up: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		num=num+2;
		sum=sum+num;
	}
	printf("The sum of first %d natural numbers is: %d",n,sum);

	getch();
}
