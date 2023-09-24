#include <stdio.h>

int main() {
    // Declare an array to store three numbers
    double numbers[3];
    
    // Read three numbers from the user
    printf("Enter three numbers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    // Calculate the sum of the numbers
    double sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += numbers[i];
    }

    // Calculate the average
    double average = sum / 3;

    // Print the average
    printf("Average of the three numbers: %.2lf\n", average);

    return 0;
}
