#include <stdio.h>

int main() {
    float R1, R2, R3, largest;

    printf("Enter the first resistance: ");
    scanf("%f", &R1);

    printf("Enter the second resistance: ");
    scanf("%f", &R2);

    printf("Enter the third resistance: ");
    scanf("%f", &R3);

    largest = R1;

    if (R2 > largest)
        largest = R2;

    if (R3 > largest)
        largest = R3;

    printf("The largest resistance is: %.2f ohms", largest);

    return 0;
}