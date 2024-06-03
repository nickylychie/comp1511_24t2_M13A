// Nicole, 24T2 Week 2
// This program gets a radius from a user,
// then calculates and prints the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {

	// make variables to hold integers
	int radius;
	// double for Pi

	// get radius from user
	printf("Please enter a radius: ");
	scanf("%d", &radius);

	// calculate area of circle with pi*r^2
	double area = pi*radius*radius;

	// print out the answer
	printf("Area: %lf\n", area);


	return 0;
}
