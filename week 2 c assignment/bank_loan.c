#include <stdio.h>

/*
Author: Simon Ngigi Wainaina
Admission Number: BCS-0538/2026
Date: 22th september 2026
*/

//a pproject to determine if a dude is eligible for loan based on his age and income

int main()
{
    int age;
    double income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (Sh): ");
    scanf("%lf", &income);

    if (age >= 21 && income >= 21000)
    {
        printf("\nCongratulations you qualify for a loan.\n");
    }
    else
    {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
