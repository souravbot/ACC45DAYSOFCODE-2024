//day 31 of coding chef fantasy 11
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the no of test cases

    while (T--) {
        int N;
        scanf("%d", &N); 

      
        int choices = N * (N - 1);
        printf("%d\n", choices);
    }

    return 0;
}


