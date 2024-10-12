#include <stdio.h>

int main() { 
   // no of test cases;
    int T;
    scanf("%d", &T);  
    
    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);
        
        // Capacity of one bag
        int capacity_per_bag = K * M;
        
        // Calculating the minimum number of bags needed
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag;
        
        printf("%d\n", bags_needed);
    }
    
    return 0;
}
