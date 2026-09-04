#include <stdio.h>

int main() {
    float battery;

    printf("Enter battery percentage: ");
    scanf("%f", &battery);

    if (battery < 15) {
        printf("LOW");
    }
    else if (battery < 80) {
        printf("NORMAL");
    }
    else {
        printf("FULL");
    }

    return 0;
}