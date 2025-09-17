#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter total numbers to be summed up: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
    getch();
}
