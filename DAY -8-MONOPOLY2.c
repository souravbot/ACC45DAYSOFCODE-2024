// day 8 of coding; monopoly;
#include <stdio.h>

int main() {
    int T;
    // no of test cases;
    scanf("%d", &T);
    
    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S);
        
       if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) 
         printf("YES\n");
    else 
          printf("NO\n");
        }
    return 0;
}

