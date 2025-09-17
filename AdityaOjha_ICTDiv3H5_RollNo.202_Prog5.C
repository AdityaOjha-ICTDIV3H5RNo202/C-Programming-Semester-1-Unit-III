#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,num=1;
	printf("Enter total number of odd numbers to be printed: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d\n",num);
		num+=2;
	}
	getch();
}
