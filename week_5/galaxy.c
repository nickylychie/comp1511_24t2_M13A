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
    init_galaxy(galaxy);

    // TODO: Place the planets and nebulae in the galaxy 
    // 2D array
    // by taking input until 'q' is pressed.
    // Planets are added with: p [row] [col] [points]
    // Nebulae are added with: n [row] [col]
    printf("Enter planets and nebulae: ");
    char cmd;
    scanf(" %c", &cmd);
    while (cmd != 'q') {
        if (cmd == 'p') {
            int points;
            scanf("%d %d %d", &row, &col, &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (cmd = 'n') {
            scanf("%d %d", &row, &col);
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        scanf(" %c", &cmd);
    }

    // TODO: Place the player in the galaxy
    // by scanning in the player position in the 
    // form: [row] [col]
    // If the given starting position is already occupied by 
    // a celestial body: 
    //      print "Invalid starting position!\n", 
    // followed by "Re-enter starting position", 
    // and continue scanning in starting positions until 
    // a valid one is scanned in.
    printf("Enter the starting position of the player: ");
    scanf("%d %d", &row, &col);
    while (galaxy[row][col] != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &row, &col);
    }
    
    
    // TODO: Place the stars in the galaxy
    // by taking input until ctrl-d is pressed.
    // Stars are added with: [row] [col] [points]
    printf("Enter the position and points of the star(s):\n")
    int points;
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
    }

    // TODO: Print the map
    print_map(galaxy);
}

void init_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            galaxy[row][col].entity = EMPTY;
            col++;
        }
        row++;
    }
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