#include <iostream>
#include <string>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s = "";
        for (int i = 0; i < n; i++)
        {
            s+= (char)('a' + (i % 3));
        }
        
        cout << s << endl;
    }

    return 0;
    
}