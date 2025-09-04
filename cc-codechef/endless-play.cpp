#include <iostream>
using namespace std;

int main() {
	int x, h;
	cin >> x >> h;
	
	if (x == 4)
	{
	    cout << h << endl;
	} else if (x > 4) {
	    int res = x - 4;
	    int ans = res * 24 + h;
	    cout << ans << endl;
	}
    
    return 0;
}

// https://www.codechef.com/START202D/problems/SKONG