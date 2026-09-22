#include <stdio.h>

//a short project to get some user info

int main()
{
    float height;
    double bankBalance;
    char phoneNumber[15];

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya Shillings): ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    printf("\n----- Your Details -----\n");
    printf("Height       : %.2f meters\n", height);
    printf("Bank Balance : KES %.2f\n", bankBalance);
    printf("Phone Number : %s\n", phoneNumber);

    return 0;
}
