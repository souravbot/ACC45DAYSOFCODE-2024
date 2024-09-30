#include <stdio.h>

int main() {
    int T; // no of test cases
    scanf("%d", &T);

    while (T--) {
    int X, Y;
    scanf("%d %d", &X, &Y);
        
        // total working hours in a week
     int totalHours = 4 * X + Y;
        
           // result
    printf("%d\n", totalHours);
    }

    return 0;
}


