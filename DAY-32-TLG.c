#include <stdio.h>

int main() {
    int n, score1, score2, cumulative1 = 0, cumulative2 = 0;
    int maxLead = 0, winner = 0;

    // Read the no of rounds
    scanf("%d", &n);

    // Loop through each round
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &score1, &score2);

       
        cumulative1 += score1;
        cumulative2 += score2;

      
        int currentLead = cumulative1 - cumulative2;
        int currentLeader = currentLead > 0 ? 1 : 2;
        int lead = currentLead > 0 ? currentLead : -currentLead;

       
        if (lead > maxLead) {
            maxLead = lead;
            winner = currentLeader;
        }
    }

  
    printf("%d %d\n", winner, maxLead);

    return 0;
}


