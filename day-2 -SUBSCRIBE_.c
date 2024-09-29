//day 2 of coding topic subscriptions
#include <stdio.h>

int main() {
    int T; 
    int N, X; 
    int subscriptions, total_cost;
       scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &X);
        
    if (N % 6 == 0)
            subscriptions = N / 6; // If N is exactly divisible by 6
    else 
            subscriptions = (N / 6) + 1; // if not then, add 1

        // total cost , hehe 
total_cost = subscriptions * X;

  printf( "%d\n", total_cost);
    
}
        return 0; }
