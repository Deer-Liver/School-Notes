#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // For tolower()

int main() {
    char input[100];
    double a, b, c;
    char a_input[20], b_input[20], c_input[20];
    int a_unknown, b_unknown, c_unknown;

    printf("Pythagorean Theorem Solver\n");
    printf("Enter values in the format: a=3 b=4 c=?\n");
    printf("(Type 'quit' to exit)\n\n");

    while (1) { // Infinite loop
        printf("> ");
        fgets(input, sizeof(input), stdin); // Read entire line

        // Remove trailing newline
        input[strcspn(input, "\n")] = '\0';

        // Check if user wants to quit
        if (strcmp(input, "quit") == 0 || strcmp(input, "exit") == 0) {
            printf("Exiting...\n");
            break;
        }

        // Parse input (e.g., "a=3 b=4 c=?")
        int parsed = sscanf(input, "a=%s b=%s c=%s", a_input, b_input, c_input);

        if (parsed != 3) {
            printf("Error: Invalid format. Use: a=3 b=4 c=?\n");
            continue;
        }

        // Reset flags
        a_unknown = b_unknown = c_unknown = 0;

        // Parse inputs
        if (strcmp(a_input, "?") == 0) a_unknown = 1;
        else a = atof(a_input);

        if (strcmp(b_input, "?") == 0) b_unknown = 1;
        else b = atof(b_input);

        if (strcmp(c_input, "?") == 0) c_unknown = 1;
        else c = atof(c_input);

        // Check for invalid inputs
        if ((a_unknown + b_unknown + c_unknown) != 1) {
            printf("Error: Exactly one variable must be unknown (marked with '?').\n");
            continue;
        }

        if ((!a_unknown && a <= 0) || (!b_unknown && b <= 0) || (!c_unknown && c <= 0)) {
            printf("Error: All given sides must be positive numbers.\n");
            continue;
        }

        // Solve for the missing variable
        if (a_unknown) {
            if (c <= b) {
                printf("Error: Hypotenuse (c) must be the largest side.\n");
                continue;
            }
            a = sqrt(c * c - b * b);
            printf("Result: a = %.2f\n", a);
        }
        else if (b_unknown) {
            if (c <= a) {
                printf("Error: Hypotenuse (c) must be the largest side.\n");
                continue;
            }
            b = sqrt(c * c - a * a);
            printf("Result: b = %.2f\n", b);
        }
        else if (c_unknown) {
            c = sqrt(a * a + b * b);
            printf("Result: c = %.2f\n", c);
        }
    }

    return 0;
}