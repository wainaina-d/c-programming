
/*
Author: Simon Ngigi Wainaina
Admission Number: BCS-0538/2026
Date: 25th september 2026
 * Exam Eligibility
 * A student is eligible for final exams if:
 *   (i)  attendance is >= 75%  AND
 *   (ii) average marks are >= 40
 * Otherwise print "Not eligible."
 */

#include <stdio.h>

int main()
{
    /* float so decimals like 82.5 are accepted */
    float attendance = 0;
    float averageMarks = 0;

    /* Take the inputs (%% prints a single % sign) */
    printf("Enter attendance (%%): ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    /* && means BOTH conditions must be true */
    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
