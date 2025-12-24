#include <stdio.h>

// A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

// For units ≤ 100: The rate is ₹5 per unit.
// For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
// For units > 300: The rate is ₹10 for units above 300.
// Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

// Input Format
// A single integer n representing the number of electricity units consumed.

// Output Format
// If the input is invalid, print, "Invalid Input!"
// Otherwise, print the total electricity bill after applying the discount, rounded to two decimal places, "The electricity bill is: [amount]."

int main()
{

    float unit = 0, bill = 0, rate_1 = 0, rate_2 = 0, rate_3 = 0;
    scanf("%f", &unit);

    if (unit >= 0 && unit <= 100)
    {
        bill = unit * 5;
        printf("The electricity bill is: %.2f.", bill);
    }

    else if (unit > 100 && unit <= 300)
    {
        rate_1 = 100 * 5;
        rate_2 = (unit - 100) * 7;
        bill = rate_1 + rate_2;

        if (bill <= 1200)
        {
            bill = bill - (bill * 10) / 100;
        }
        printf("The electricity bill is: %.2f.", bill);
    }

    else if (unit > 300)
    {
        rate_1 = 100 * 5;
        rate_2 = 200 * 7;
        rate_3 = (unit - 300) * 10;
        bill = rate_1 + rate_2 + rate_3;

        if (bill <= 1200)
        {
            bill = bill - (bill * 10) / 100;
        }

        printf("The electricity bill is: %.2f.", bill);
    }

    else
    {
        printf("Invalid Input!");
    }

    return 0;
}

// Sample Input 0

// 250
// Sample Output 0

// The electricity bill is: 1550.00.
// Sample Input 1

// 450
// Sample Output 1

// The electricity bill is: 3400.00.
// Sample Input 2

// -10
// Sample Output 2

// Invalid Input!
// Sample Input 3

// 150
// Sample Output 3

// The electricity bill is: 765.00.
