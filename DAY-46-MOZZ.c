#include <stdio.h>

int main() {
    int T;  // 
    scanf("%d", &T);
    
    while (T--) {
        int X, Y, R;  
        scanf("%d %d %d", &X, &Y, &R);
        
        
        int extraSticks = R / 30;
        int totalSticks = X + extraSticks;
        
      
        int plates = (totalSticks + Y - 1) / Y;  //
        
        printf("%d\n", plates);
    }
    
    return 0;
}


