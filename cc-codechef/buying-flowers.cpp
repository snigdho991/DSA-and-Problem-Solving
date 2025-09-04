#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--)
	{
	    int n;
	    cin >> n;
	    
	    int res = n % 3;
	    
	    if (res == 0)
	    {
	        cout << n / 3 * 5 << endl;
	    } else {
	        if (res % 2 == 0)
	        {
	            cout << (n / 3 * 5) + (res / 2 * 4) << endl;
	        } else {
	            cout << (n / 3 - 1) * 5 + 8 << endl;
	        }
	    }
	}
	
	return 0;
}

// https://www.codechef.com/START202D/problems/FLOWERBUY