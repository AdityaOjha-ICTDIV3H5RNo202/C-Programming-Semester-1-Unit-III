#include <stdio.h>
#include <conio.h>
void main()
{
	int i;
	printf("The first ten odd numbers are:\n");
	for (i=1;i<=19;i+=2)
	{
		printf("%d\n",i);
	}
	getch();
}