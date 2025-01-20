#include <stdio.h>
#include <math.h>

int main() {
    float L1, G1, L2, G2;

    // Get input for the first coordinate
    printf("Enter the latitude and longitude of the 1st coordinate: ");
    scanf("%f %f", &L1, &G1);

    // Get input for the second coordinate
    printf("Enter the latitude and longitude of the 2nd coordinate: ");
    scanf("%f %f", &L2, &G2);

    // Convert latitude and longitude from degrees to radians
    L1 = L1 * M_PI / 180;
    L2 = L2 * M_PI / 180;
    G1 = G1 * M_PI / 180;
    G2 = G2 * M_PI / 180;

    // Haversine formula
    float a = pow(sin((L2 - L1) / 2), 2) + cos(L1) * cos(L2) * pow(sin((G2 - G1) / 2), 2);
    float c = 2 * atan2(sqrt(a), sqrt(1 - a));
    float d = 6371 * c; // Earth radius in kilometers

    // Print the distance
    printf("Distance: %f km\n", d);

    return 0;
}
