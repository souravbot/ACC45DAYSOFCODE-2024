// day  12 of coding flip the card
#include <stdio.h>

int main() {
    // no of test cases
    int T; 
    scanf("%d", &T);

    while (T--) 
    {
       // X — the total number of cards; N-the number of cards which are initially face-up;
    int N, X; 
        scanf("%d %d", &N, &X);

        int flips_to_face_down = X;
        int flips_to_face_up = N - X;     
        
        if (flips_to_face_down < flips_to_face_up) 
            printf("%d\n", flips_to_face_down);
        else 
            printf("%d\n", flips_to_face_up);
      }
    return 0;
}
