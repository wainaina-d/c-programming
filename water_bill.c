
/*
Author: Simon Ngigi Wainaina
Admission Number: BCS-0538/2026
Date: 25th september 2026

 * Water Bill Calculator
 *   0 - 30 units     -> 20 KES per unit
 *   31 - 60 units    -> 25 KES per unit
 *   Above 60 units   -> 30 KES per unit
 *
 * Each band's rate is charged only on the units that fall inside that band.
 */

#include <stdio.h>

int main()
{
    float units = 0;
    float bill = 0;

    printf("Enter water units consumed: ");
    scanf("%f", &units);

    /* if - else if - else: only ONE of these blocks runs */
    if (units <= 30) {
        /* everything falls in the first band */
        bill = units * 20;
    } else if (units <= 60) {
        /* first 30 units at 20 KES, the rest at 25 KES */
        bill = (30 * 20) + (units - 30) * 25;
    } else {
        /* first 30 at 20, next 30 at 25, everything above 60 at 30 */
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    /* %.2f = show the number with two decimal places */
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
