// Nicole, 24T2 Week 2
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user 
//	  they are not tall enough to ride
// 
// 4. If the height is above the minimum but below
//    the ride alone threshold, it should print a 
//    message telling the user they can ride with 
//    an adult
//
// 5. If the height is or is above the ride alone 
//    threshold, it should print a message telling
//    the user they can ride.

#include <stdio.h>

#define MIN_RIDE_HEIGHT 200
#define RIDE_ALONE_HEIGHT 300

int main(void) {

	double height;
	printf("How tall are you? ");
	scanf("%lf", &height);

	// if (height <= 0) {
	// 	printf("Error: enter a valid height\n");
	// } else {
	// 	if (height >= MIN_RIDE_HEIGHT && height < RIDE_ALONE_HEIGHT) {
	// 		printf("You are too short but you can ride with an adult\n");
	// 	} else if (height < MIN_RIDE_HEIGHT) {
	// 		printf("You are too short!\n");
	// 	}

	// 	if (height >= RIDE_ALONE_HEIGHT) {
	// 		printf("You are tall enough for the ride!");
	// 	}
	// }
	
	if (height <= 0) {
		printf("Error: enter a valid height\n");
	} else if (height >= MIN_RIDE_HEIGHT && height < RIDE_ALONE_HEIGHT) {
		printf("You are too short but you can ride with an adult\n");
	} else if (height < MIN_RIDE_HEIGHT) {
		printf("You are too short!\n");
	} else {
		printf("You are tall enough for the ride!\n");
	}

	
	
	return 0;
}
