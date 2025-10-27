#include <stdio.h>
#include <conio.h>
void main()
{
	int num,digit,rev=0;

	printf("ENTER NUMBER TO SEPERATE DIGITS: ");
	scanf("%d",&num);

	int temp=num;
	while (temp>0)
	{
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	while (rev>0)
	{
		digit=rev%10;
		printf("%d",digit);
		rev=rev/10;
	}

	printf("\n");
	getch();
}