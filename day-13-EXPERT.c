// day 13 of coding; expert setter
#include <stdio.h>

int main() {
    int T, X, Y;
    
    // Read the no of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &X, &Y);
        
        if (Y * 2 >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

