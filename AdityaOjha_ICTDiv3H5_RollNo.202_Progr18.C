#include <stdio.h>
int main()
{
    int i, b=0, g=0;
    char arr[50];

    printf("Enter b for boys and g for girls (50 entries):\n");

    for (i=0; i<50; i++)
    {
        scanf(" %c", &arr[i]);   // note space before %c
        if (arr[i] == 'b')
        {
            b++;
        }
        else if (arr[i] == 'g')
        {
            g++;
        }
        else
        {
            printf("Invalid input at position %d!\n", i+1);
        }
    }

    printf("Total number of boys and girls: %d %d\n", b, g);
    return 0;
}
