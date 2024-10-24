#include <stdio.h>

int main() {
    int T; // no of test cases
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N]; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        
        int degree = -1;
        for (int i = 0; i < N; i++) {
            if (A[i] != 0) {
                degree = i;
            }
        }

        printf("%d\n", degree);
    }

    return 0;
}


