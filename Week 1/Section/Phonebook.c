#include<stdio.h>   // Including the standard input/output library for C
#include<cs50.h>    // Including the CS50 library for additional functions

int main(void)
{
    // Asking the user for their name and storing it in the variable 'name'
    string name = get_string("What's your name?\n");

    // Asking the user for their age and storing it in the variable 'age'
    int age = get_int("How old are you?\n");

    // Asking the user for their phone number and storing it in the variable 'number'
    string number = get_string("What's your phone number?\n");

    // Printing the user's name using the placeholder '%s' for a string
    printf("Your name is: %s \n", name);

    // Printing the user's age using the placeholder '%i' for an integer
    printf("Your age is: %i \n", age);

    // Printing the user's phone number using the placeholder '%s' for a string
    printf("Your number is: %s \n", number);
}
