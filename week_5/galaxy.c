// Nicole, 24T2 Week 5
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy 
    // by setting everything in the galaxy 2D array to empty


    // TODO: Place the planets and nebulae in the galaxy 2D array
    // by taking input until 'q' is pressed.
    // Planets are added with: p [row] [col] [points]
    // Nebulae are added with: n [row] [col]
    printf("Enter planets and nebulae: ");

    // TODO: Place the player in the galaxy
    // by scanning in the player position in the form: [row] [col]
    // If the given starting position is already occupied by a
    // celestial body: print "Invalid starting position!\n", followed
    // by "Re-enter starting position", and scan in starting positions
    // until a valid one is scanned in.
    printf("Enter the starting position of the player: ");
    
    // TODO: Place the stars in the galaxy
    // by taking input until ctrl-d is pressed.
    // Stars are added with: [row] [col] [points]
    printf("Enter the position and points of the star(s):\n")

    // TODO: Print the map
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}