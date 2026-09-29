#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {
    // Ensure there are exactly two arguments: width and height
    if (ac != 3) {
        return 0; // Exit without printing anything
    }

    // Convert the arguments to integers
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    // Ensure that both x and y are positive
    if (x <= 0 || y <= 0) {
        return 0; // Exit without printing anything
    }

    // Print the top row
    for (int i = 0; i < x; i++) {
        if (i == 0 || i == x - 1) {
            printf("o");
        } else {
            printf("-");
        }
    }
    printf("\n");

    // Print the middle rows (if height > 1)
    for (int i = 1; i < y - 1; i++) {
        printf("|");
        for (int j = 1; j < x - 1; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    // Print the bottom row (only if height > 1)
    if (y > 1) {
        for (int i = 0; i < x; i++) {
            if (i == 0 || i == x - 1) {
                printf("o");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
