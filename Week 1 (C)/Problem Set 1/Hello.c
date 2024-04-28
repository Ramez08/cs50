#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter their name and store it in the variable 'name'
    string name = get_string("What's your name? ");

    // Print a greeting message using the provided name
    printf("hello, %s\n", name);
}
