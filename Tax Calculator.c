#include <stdio.h>

// The system should work as follows:

// 1. If Aakash’s income is ₹2,50,000 or less, no tax should be calculated.
// 2. For an income greater than ₹2,50,000 upto ₹5,00,000, the tax is 5% on the amount exceeding ₹2,50,000.
// 3. For an income greater than ₹5,00,000 upto ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the amount exceeding ₹5,00,000.
// 4. For an income above ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the next ₹5,00,000 above ₹5,00,000, 30% on the amount exceeding ₹10,00,000.

// Input Format:
// A single floating-point number income representing the annual income

// Output Format:
// If the income is valid, print the tax payable up to 2 decimal places.
// If the income is invalid, print "INVALID".

int main()
{

    float income, taxableAmount_1, taxableAmount_2, taxableAmount_3,tax;

    scanf("%f", &income);

    if (income <= 250000)
    {
        printf("%.2f", 0);
    }

    else if (income > 250000 && income <= 500000)
    {
        taxableAmount_1 = income - 250000;
        tax = (taxableAmount_1 * 5) / 100;
        printf("%.2f", tax);
    }

    else if (income > 500000 && income <= 1000000)
    {
        taxableAmount_1 = 250000;
        taxableAmount_2 = income - 250000;
        tax = (taxableAmount_1 * 5) / 100 + (taxableAmount_2 * 20) / 100;
        printf("%.2f", tax);
    }

    else if (income > 1000000)
    {
        taxableAmount_1 = 250000;
        taxableAmount_2 = 500000;
        taxableAmount_3 = income - 750000;
        tax = (taxableAmount_1 * 5) / 100 + (taxableAmount_2 * 20) / 100 + (taxableAmount_3 * 30) / 100;
        printf("%.2f", tax);
    }

    return 0;
}

// Sample Input 0

// 450000
// Sample Output 0

// 10000.00
// Sample Input 1

// 500000
// Sample Output 1

// 12500.00
// Sample Input 2

// 250000
// Sample Output 2

// 0.00
// Sample Input 3

// 856734
// Sample Output 3

// 83846.80