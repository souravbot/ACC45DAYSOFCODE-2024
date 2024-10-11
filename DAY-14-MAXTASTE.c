//day 14 of code; 
#include <stdio.h>

int main() {
    // number of test caseS
    int T;
    scanf("%d", &T); 
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); 

        // Calculating  maximum possible tastiness
        int maxTastiness = (a + c > a + d) ? (a + c) : (a + d);
        maxTastiness = (maxTastiness > b + c) ? maxTastiness : (b + c);
        maxTastiness = (maxTastiness > b + d) ? maxTastiness : (b + d);

        printf("%d\n", maxTastiness);
    }

    return 0;
}

