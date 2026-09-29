#include <stdio.h>

/*
Author: Simon Ngigi Wainaina
Admission Number: BCS-0538/2026
Date: 24th september 2026
*/
int main()
{
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate;
    int fineAmount;

    /* (i) Get inputs */
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (integer): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (integer): ");
    scanf("%d", &returnDate);

    /* (ii) Calculate days overdue */
    daysOverdue = returnDate - dueDate;

    /* (iii) Determine fine rate using if...else */
    if (daysOverdue <= 0) {
        daysOverdue = 0;
        fineRate = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    /* (iv) Display results */
    printf("\n----- Library Fine Details -----\n");
    printf("bookID      : %d\n", bookID);
    printf("dueDate     : %d\n", dueDate);
    printf("returnDate  : %d\n", returnDate);
    printf("daysOverdue : %d\n", daysOverdue);
    printf("fineRate    : Ksh. %d per day\n", fineRate);
    printf("fineAmount  : Ksh. %d\n", fineAmount);

    return 0;
}
