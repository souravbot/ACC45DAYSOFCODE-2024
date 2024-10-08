// day 11 of code; police and the thief
#include <stdlib.h>

int main() {
    int T;  //no of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        
            scanf("%d %d", &X, &Y);
        int time = abs(X - Y);
        
        
        printf("%d\n", time);
    }

    return 0;
}

