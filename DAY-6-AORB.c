// A OR B; days 6 of 45 days of code
#include <stdio.h>

int main() {
    int T;  // no of test cases;
    scanf("%d", &T);
// loop
    while (T--) {
        int X,Y;
    scanf("%d %d",&X, &Y);

        // Time taken for both problems and score calculations;
        
        int score_A_first = (500 - X * 2) + (1000 - (X + Y) * 4);   
        int score_B_first = (1000 - Y * 4) + (500 - (X + Y) * 2);  

        // output max;
        printf("%d\n", (score_A_first > score_B_first) ? score_A_first : score_B_first);
    }

    return 0;
}
