#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int S, X, Y, Z; 
        scanf("%d %d %d %d", &S, &X, &Y, &Z);

        int unusedMemory = S - (X + Y);

        
        if (unusedMemory >= Z) {
            printf("0\n"); 
        } else if (unusedMemory + X >= Z || unusedMemory + Y >= Z) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}

