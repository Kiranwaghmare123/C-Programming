#include <stdio.h>
#include <math.h>

#define NUM_POINTS 10

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    double x[NUM_POINTS], y[NUM_POINTS], total_distance = 0.0;

    // Taking input for coordinates
    printf("Enter the X and Y coordinates of 10 points:\n");
    for (int i = 0; i < NUM_POINTS; i++) {
        printf("Point %d (x y): ", i + 1);
        scanf("%lf %lf", &x[i], &y[i]);
    }

    // Calculate sum of distances between consecutive points
    for (int i = 0; i < NUM_POINTS - 1; i++) {
        total_distance += calculateDistance(x[i], y[i], x[i + 1], y[i + 1]);
    }

    // Print the total distance
    printf("\nTotal distance from the first to the last point: %.2f\n", total_distance);

    return 0;
}
