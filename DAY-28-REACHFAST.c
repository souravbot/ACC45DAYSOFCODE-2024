#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // No of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);

        int distance = abs(A - B);
        int steps = (distance + K - 1) / K; 

        printf("%d\n", steps);
    }

    return 0;
}

