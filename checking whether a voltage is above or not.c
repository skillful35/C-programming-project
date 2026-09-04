#include <stdio.h>

int main() {
    float voltage;
    float safeLimit = 15.0;

    printf("Enter measured voltage: ");
    scanf("%f", &voltage);

    if (voltage > safeLimit) {
        printf("Warning: Voltage is above the safe limit.");
    } else {
        printf("Voltage is within the safe limit.");
    }

    return 0;
}