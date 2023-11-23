#include <cs50.h>
#include <stdio.h>

int main()
{
    // Declare an array to store individual digits of the credit card number
    int myArray[16];

    // Get the credit card number as input from the user
    long number = get_long("Number: ");

    // Find the number of digits in the input credit card number
    int numcount = 0;
    long temp = number;
    while (temp != 0)
    {
        temp /= 10;
        numcount++;
    }

    // Store each digit of the credit card number in the array
    for (int i = numcount - 1; i >= 0; i--)
    {
        myArray[i] = number % 10;
        number /= 10;
    }

    int sum = 0;
    bool isSecond = false;

    // Perform Luhn's algorithm to calculate the checksum
    for (int i = numcount - 1; i >= 0; i--)
    {
        int digit = myArray[i];

        if (isSecond)
        {
            digit *= 2;
            digit = (digit % 10) + (digit / 10);
        }

        sum += digit;
        isSecond = !isSecond;
    }

    // Validate card type based on length and starting digits
    if ((numcount < 13 || numcount > 16) || (sum % 10 != 0))
    {
        printf("INVALID\n");
    }
    else
    {
        // Check specific conditions to identify the card type
        if (numcount == 15 && myArray[0] == 3 && (myArray[1] == 4 || myArray[1] == 7))
        {
            printf("AMEX\n");
        }
        else if (numcount == 16 && myArray[0] == 5 && myArray[1] >= 1 && myArray[1] <= 5)
        {
            printf("MASTERCARD\n");
        }
        else if ((numcount == 16 || numcount == 13 || numcount == 14) && myArray[0] == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}
