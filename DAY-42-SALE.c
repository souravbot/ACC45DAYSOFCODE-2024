#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        
        
        int minPrice = A;
        if (B < minPrice) minPrice = B;
        if (C < minPrice) minPrice = C;
        
       
        int totalPrice = A + B + C - minPrice;
        
       
        printf("%d\n", totalPrice);
    }
    
    return 0;
}

