#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;  // Length of the array
        scanf("%d", &N);

        int A[N];
        int sum = 0;  // To store the sum of array elements

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum += A[i];  
        }

        
        if (sum == 0) {
            printf("0\n");
        }
        
        else if (abs(sum) % 2 != 0) {
            printf("-1\n");
        }
        
        else {
            printf("%d\n", abs(sum) / 2);
        }
    }

    return 0;
}



