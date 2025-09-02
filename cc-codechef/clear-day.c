#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	
	if (x + y <= 7) {
	    if (x + y == 7) {
	        printf("0");
	    } else {
	        int z = 7 - (x + y);
	        printf("%d", z);
	    }
	}
	
	return 0;

}

// https://www.codechef.com/problems/CLEARDAY

