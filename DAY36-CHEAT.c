//DAY-36of coding
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N);


        int tuesdays = N / 7;           
        if (N % 7 >= 2) tuesdays += 1;

        printf("%d\n", tuesdays);
    }

    return 0;
}


