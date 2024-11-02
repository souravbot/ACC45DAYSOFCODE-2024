// Day 30 of coding 
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  //number of test cases
    
    while (T--) {
        int A, B, C, D;
        
      
        scanf("%d %d", &A, &B);
        scanf("%d %d", &C, &D);
        
       
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
    
    return 0;
}


