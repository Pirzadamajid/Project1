#include <stdio.h>

int main() {
    float length, breadth, height, volume;
    printf("Enter length, breadth, and height: ");
    scanf("%f %f %f", &length, &breadth, &height);

    volume = length * breadth * height;
    printf("Volume of cuboid = %.2f\n", volume);
    return 0;
}