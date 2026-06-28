#include <stdio.h>

int rows = 5;

int main()
{
//inverted right half pyramid
printf("Inverted right half Pyramid\n");
 

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // Inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

//inverted left half pyramid
printf("Inverted left half Pyramid\n");
  // Outer loop for printing all rows
    for (int i = 0; i < rows; i++)
    {

        // First Inner loop for printing white spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Second inner loop for printing star *
        for (int k = 0; k < rows - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

//inverted full pyramid
printf("Inverted Full Pyramid\n");

  // Outer loop for printing all rows
    for (int i = 0; i < rows; i++)
    {

        // First inner loop printing leading white spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Second inner loop printing stars *
        for (int k = 0; k < 2 * (rows - i) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    }
