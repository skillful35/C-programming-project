#include <stdio.h>

int main() {
    float voltage, current, power;

    printf("Enter voltage: ");
    scanf("%f", &voltage);

    printf("Enter current: ");
    scanf("%f", &current);

    power = voltage * current;

    printf("Electrical power = %.2f W", power);

    return 0;
}