#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start Size (Minimum 9): ");
    }
    while (start < 9); // Ensure the start size is at least 9

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End Size (Larger than Start): ");
    }
    while (start > end); // Ensure the end size is larger than the start size

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (start < end)
    {
        // Formula for population increase, assuming growth and decrease rates
        int increase = (start / 3) - (start / 4);
        start = start + increase; // Update the population size
        years++; // Increment the number of years
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
