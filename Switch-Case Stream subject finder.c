#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int year, intershipStatus;
    char branch;

    scanf("%d", &year);

    switch (year)
    {
    case 1:
    {
        printf("Physics\nChemistry\nMaths");
        break;
    }

    case 2:
    {
        printf("Enter your Branch");
        scanf(" %c", &branch);

        switch (branch)
        {

        case 'C':
        {
            printf("C Programming\nComputer Organisation & Architecture\nWeb Development");
            break;
        }

        case 'E':
        {
            printf("Signal Processing\nLogic Design\nNetwork analysis");
            break;
        }

        case 'M':
        {
            printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");

            break;
        }

        break;
        }

        break;
    }

    case 3:
    {

        scanf(" %c", &branch);

        switch (branch)
        {

        case 'C':
        {
            printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
            break;
        }

        case 'E':
        {
            printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
            break;
        }

        case 'M':
        {
            printf("Applied Mechanics\nKinematics\nMechatronics");
            break;
        }

        break;
        }
        break;
    }

    case 4:
    {

        scanf("%d", &intershipStatus);

        switch (intershipStatus)
        {

        case 0:
        {

            scanf(" %c", &branch);
            switch (branch)
            {

            case 'C':
            {
                printf("Operating Systems\nComputer Networks\nCompiler Design");
                break;
            }

            case 'E':
            {
                printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
                break;
            }

            case 'M':
            {
                printf("Mechanism of Materials(MOM)\nStrenght of Materials(SOM)\nMachine Design");
                break;
            }

            break;
            }

            break;
        }

        case 1:
            printf("Enrolled into Internship Program");
            break;
        }

        break;
    }

    break;
    }
    return 0;
}


// Sample Input 0

// 1 C 
// Sample Output 0

// Physics
// Chemistry
// Maths
// Sample Input 1

// 3 E
// Sample Output 1

// Analog Electronics
// Embedded Systems
// Microcontrollers
// Sample Input 2

// 4 M 1
// Sample Output 2

// Enrolled into Internship Program