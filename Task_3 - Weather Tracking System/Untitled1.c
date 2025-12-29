#include <stdio.h>

int main() {
    float temperatures[7];
    float sum = 0, average, highest, lowest;

    // Input temperatures for 7 days
    for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }

    // Initialize highest and lowest
    highest = temperatures[0];
    lowest = temperatures[0];

    // Calculate sum, highest, and lowest
    for (int i = 0; i < 7; i++) {
        sum += temperatures[i];

        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }

        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }

    // Calculate average
    average = sum / 7;

    // Display results
    printf("\nWeather Summary for the Week:\n");
    printf("Highest Temperature: %.2f\n", highest);
    printf("Lowest Temperature: %.2f\n", lowest);
    printf("Average Temperature: %.2f\n", average);

    return 0;
}
