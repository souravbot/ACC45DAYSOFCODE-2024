//day 19 of coding; test score
#include <stdio.h>

int main() {
    int T; // No of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        if (Y % X == 0 && Y <= N * X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

