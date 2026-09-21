#include <stdio.h>
#define PI 3.14159

//damn, this is probably my first sort of calculator created in C, and it calculates the volume and surface area of a cylinder based on user input for radius and height.

int main()
{
    float radius, height, volume, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height);

    printf("\n----- Cylinder Results -----\n");
    printf("Volume       : %.2f cubic units\n", volume);
    printf("Surface Area : %.2f square units\n", surfaceArea);

    return 0;
}
