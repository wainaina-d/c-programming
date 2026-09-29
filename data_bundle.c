
/*Author: Simon Ngigi Wainaina
Admission Number: BCS-0538/2026
Date: 29th september 2026

 * Mobile Data Bundle Purchase
 *   1 -> 100MB @ 50 KES
 *   2 -> 500MB @ 200 KES
 *   3 -> 1GB   @ 350 KES
 *   4 -> 2GB   @ 600 KES
 */

#include <stdio.h>

int main()
{
    /* starts at 0 so bad input (like letters) ends up as "Invalid choice" */
    int choice = 0;

    /* 1. Display the menu */
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    /* 2. Ask for the choice */
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    /* 3. switch jumps to the matching case.
     *    break stops it from running into the next case. */
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            /* 4. Runs for anything that isn't 1-4 */
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
