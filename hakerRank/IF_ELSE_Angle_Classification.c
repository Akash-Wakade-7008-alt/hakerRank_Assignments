#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// A boy is playing with a clock, and initially, the clock points at 12:00. He rotates the hour hand by a given angle, x degrees. Your task is to classify the resulting angle formed between the hour hand and the minute hand based on the following rules:

// Acute Angle: An angle less than 90 degrees.
// Right Angle: An angle exactly equal to 90 degrees.
// Obtuse Angle: An angle between 90 degrees and 180 degrees.
// Straight Angle: An angle exactly equal to 180 degrees.
// Reflex Angle: An angle greater than 180 degrees but less than 360 degrees.
// Full Rotation: An angle exactly equal to 360 degrees.
// Write a program to determine the type of angle formed between the hour hand and minute hand.

// Note:

// The minute hand does not move when the hour hand is rotated. Only the hour hand rotation is considered.
// The boy may rotate the hour hand more than 1 rotation.

// Input Format

// A single integer representing the angle x

// Constraints

// 0 ≤ x ≤ 10^6

// Output Format

// Print the classification of the angle in terms of Acute Angle, Right Angle, Obtuse Angle, Straight Angle, Reflex Angle, or Full Rotation.

int main()
{

    int x, angle;

    scanf("%d", &x);
    angle = x % 360;

    if (x == 0)
    {
        printf("Acute Angle");
        return 0;
    }

    if (angle == 0)
    {
        printf("Full Rotation");
    }
    else if (angle < 90)
    {
        printf("Acute Angle");
    }

    else if (angle == 90)
    {
        printf("Right Angle");
    }

    else if (angle > 90 && angle < 180)
    {
        printf("Obtuse Angle");
    }

    else if (angle == 180)
    {
        printf("straight Angle");
    }

    else if (angle > 180 && angle < 360)
    {
        printf("Reflex Angle");
    }

    return 0;
}

// Sample Input 0

// 90
// Sample Output 0

// Right Angle
// Sample Input 1

// 45
// Sample Output 1

// Acute Angle
// Sample Input 2

// 150
// Sample Output 2

// Obtuse Angle
// Sample Input 3

// 270
// Sample Output 3

// Reflex Angle
// Sample Input 4

// 360
// Sample Output 4

// Full Rotation
// Sample Input 5

// 400
// Sample Output 5

// Acute Angle
