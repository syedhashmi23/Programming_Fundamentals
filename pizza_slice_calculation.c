#include <stdio.h>

int main() {
float diameter, radius, area;
int num_slices;

printf("Enter the diameter of the pizza in inches: ");
scanf("%f", &diameter);

radius = diameter / 2.0;
area = 3.14 * radius * radius;
num_slices = area / 14.12;

printf("%f inch pizza can be divided into %d slices.\n", diameter, num_slices);

return 0;
}
