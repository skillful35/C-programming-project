#include <stdio.h>

int main() {
    float sensor1, sensor2, sensor3, sensor4, sensor5;
    float average;

    printf("Enter five sensor values: ");
    scanf("%f %f %f %f %f",
          &sensor1, &sensor2, &sensor3, &sensor4, &sensor5);

    average = (sensor1 + sensor2 + sensor3 + sensor4 + sensor5) / 5;

    printf("The average sensor value is: %.2f", average);

    return 0;
}