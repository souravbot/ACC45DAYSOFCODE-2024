// day 21 of coding; single use attack
#include <stdio.h>

int main() {
    int T; // No of test cases
    scanf("%d", &T);

    while (T--) {
        int H, X, Y; 
        scanf("%d %d %d", &H, &X, &Y);

        
        int normalAttacksOnly = (H + X - 1) / X;  

        
     int remainingHealth = H - Y;
     int attacksAfterSpecial = remainingHealth > 0 ? (remainingHealth + X - 1) / X : 0; 
        int totalAttacksWithSpecial = 1 + attacksAfterSpecial; 

    
      int result = (normalAttacksOnly < totalAttacksWithSpecial) ? normalAttacksOnly : totalAttacksWithSpecial;
        
        
        printf("%d\n", result);
    }

    return 0;
}

