// day 9 of coing; the cooler dilemma 
#include <stdio.h>
int main() {
    int T; // no of test cases
    scanf("%d", &T);

    while (T--) {
    // X = rent per month; y = cost to purchase
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X >= Y) 
            printf("0\n");
         else 
            printf("%d\n", (Y - 1) / X); 
        }
    return 0;
   }
