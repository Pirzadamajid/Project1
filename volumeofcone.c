#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, volume;
    printf("Enter radius and height of cone: ");
    scanf("%f %f", &radius, &height);

    volume = (1.0 / 3) * PI * radius * radius * height;
    printf("Volume of cone = %.2f\n", volume);
    return 0;
}