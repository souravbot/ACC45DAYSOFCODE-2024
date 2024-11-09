#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M); 
        
        int* A = (int*)malloc(N * sizeof(int));
        long long maxDistance = 0;
        
        // Reading array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            
            
            if (A[i] <= M / 2) {
                maxDistance += (M - A[i]); 
            } else {
                maxDistance += (A[i] - 1); 
            }
        }
        
        printf("%lld\n", maxDistance);
        free(A);
    }
    
    return 0;
}


