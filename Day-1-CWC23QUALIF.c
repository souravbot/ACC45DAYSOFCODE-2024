//1st day code; cricket world cup qualifier;
#include <stdio.h>

int main() {
	int X; // X REPRESENTS TOTAL POINTS SCORED BY THE GIVEN TEAM
	//input format to print;
	scanf("%d",& X);

	//checking the range;
		if (X< 1 || X> 20)
	puts("outside the range of constraints, invalid input");
	else //checking the score
	if(X>= 12)
	puts("YES");
	else
	puts("NO");
	return 0;

}

