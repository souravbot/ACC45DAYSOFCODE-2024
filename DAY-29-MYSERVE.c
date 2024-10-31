#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // no of test cases

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q); 
        
        int total_points = P + Q;
        int cycle = total_points / 2;

        if (cycle % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}


