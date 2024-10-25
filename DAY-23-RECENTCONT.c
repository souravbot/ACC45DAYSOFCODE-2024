#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // no of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // no  of problems

        int start38_count = 0, ltime108_count = 0;
        char contest_codes[N][10]; 

        for (int i = 0; i < N; i++) {
            scanf("%s", contest_codes[i]);
            
            if (contest_codes[i][0] == 'S') { 
                start38_count++;
            } else { 
                ltime108_count++;
            }
        }

        printf("%d %d\n", start38_count, ltime108_count);
    }

    return 0;
}


