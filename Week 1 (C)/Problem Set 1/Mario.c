#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height <= 0 || height > 8)
    {
        height = get_int("What is the height of the pyramid? ");
    }

    // Loop to create each level of the pyramid
    for (int levels = 0; levels < height; levels++)
    {
        // Loop to create spaces before the '#' symbols
        for (int steps = 0; steps < height; steps++)
        {
            if (steps < height - levels - 1)
            {
                printf(" "); // Print spaces for pyramid shape
            }
            else
            {
                printf("#"); // Print '#' for the pyramid structure
            }
        }
        printf("  "); // Add space between staircases

        // Create the second staircase (opposite)
        for (int steps = 0; steps <= levels; steps++)
        {
            printf("#"); // Print '#' for the opposite staircase
        }
        printf("\n"); // Move to the next line to start a new level of the pyramid
    }
}
