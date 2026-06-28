#include <stdio.h>

int main()
{
    Printf("Hollow  full pyramid\n");
    int rows = 5;

    // Outer loop to iterate through each loop
    for (int i = 0; i < rows; i++)
    {

        // First inner loop to print whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
            printf(" ");

        // Second inner loop to print stars * and inner whitespaces
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i || i == rows - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

Printf("\nHollow inverted full pyramid\n\n");

     // Outer loop iterating through each row
    for (int i = 0; i < rows; i++)
    {

        // First inner loop to print leading white space
        for (int j = 0; j < 2 * i + 1; j++)
            printf(" ");

        // Second inner loop to print star * and hollow white space
        for (int k = 0; k < 2 * (rows - i) - 1; k++)
        {
            if (k == 0 || k == 2 * (rows - i) - 2 || i == 0)
                printf("* ");
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}