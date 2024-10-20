//day 18 of coding; binary battles 
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  //no number of test cases

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  

        int rounds = 0;
        int teams = N;

        while (teams > 1) {
            teams /= 2;
            rounds++;
        }

        // Total time
        int total_time = rounds * A + (rounds - 1) * B;

    
        printf("%d\n", total_time);
    }

    return 0;
}


