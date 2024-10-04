
// day 7 of coding janmash and assignments 
#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    
    // Loop 
    for (int i = 0; i < T; i++) {
        scanf("%d", &X);
        
        if (X <= 7) 
          printf("Yes\n");
         else 
        printf("No\n");
    }
    return 0;
}


