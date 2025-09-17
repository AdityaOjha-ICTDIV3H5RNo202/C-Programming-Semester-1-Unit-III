#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n;
	printf("Enter total numbers to be printed: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d",i);
		printf("\n");
	}
	getch();
}
