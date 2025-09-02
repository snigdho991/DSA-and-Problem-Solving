#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	
	if (x >= 1 && x < y && y <= 1000) {
	    int c = 6 * x + y;
	    printf("%d", c);
	}
	
	return 0;

}

// https://www.codechef.com/problems/FOODCOST

