#include <stdio.h>

// Conditions to Host the Celebration:

// The total cost of the celebration must not exceed the budget.
// The number of guests must be greater than 5 and less than or equal to 50.
// At least one of the following conditions must hold:
// The decoration cost is less than 30% of the budget.
// The total food cost is less than 50% of the budget.
// If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
// Input Format

// The input consists of six integers:

// budget: Total budget for the celebration (in dollars).
// numGuests: Number of guests invited.
// foodCostPerGuest: Cost of food per guest (in dollars).
// decorationCost: Cost of decorations (in dollars).
// musicCost: Cost of hiring a DJ or music system (in dollars).
// extraExpenses: Additional expenses for the celebration (in dollars)

// Output Format

// Output a single line:

// "Celebration Approved" if Sharib can host the celebration within the given conditions.
// "Celebration Denied" otherwise.

int main()
{

    int budget, numGuest, foodCostPerGuest, decorationCost, musicCost, extraExpenses, totalCost, totalFoodCost;
    scanf("%d", &budget);
    scanf("%d", &numGuest);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

    totalFoodCost = foodCostPerGuest * numGuest;

    if (decorationCost < (30 * budget) / 100 || totalFoodCost < (50 * budget) / 100)
    {
        if (numGuest > 5 && numGuest <= 25)
        {
            totalCost = totalFoodCost + decorationCost + extraExpenses;

            if (totalCost <= budget)
            {
                printf("Celebration Approved");
            }
        }

        else if (numGuest > 25 && numGuest <= 50)
        {
            totalCost = totalFoodCost + decorationCost + extraExpenses + musicCost;

            if (totalCost <= budget)
            {
                printf("Celebration Denied");
            }
        }
    }

    return 0;
}

// Sample Input 0

// 1000
// 20
// 25
// 200
// 0
// 150
// Sample Output 0

// Celebration Approved
// Sample Input 1

// 500
// 30
// 15
// 100
// 0
// 100
// Sample Output 1

// Celebration Denied
// Sample Input 2

// 1000
// 10
// 80
// 100
// 50
// 50
// Sample Output 2

// Celebration Approved
// Sample Input 3

// 500
// 10
// 40
// 200
// 50
// 100
// Sample Output 3

// Celebration Denied