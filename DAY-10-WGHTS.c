// day 10 of coding; weights 
#include <stdio.h>

int main() {
    int T; // no  of test cases
    scanf("%d", &T);

    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);

        if (W == X || W == Y || W == Z || 
            W == (X + Y) || W == (X + Z) || W == (Y + Z) || 
            W == (X + Y + Z)) 
            printf("YES\n");
         else 
            printf("NO\n");
        }
    return 0;
}


