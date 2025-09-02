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

        string s;
        cin >> s;

        string get_sbstr = s.substr(1, n - 2);
        string check_str;

        bool has_duplicate = false;
        for (char c: get_sbstr)
        {
            if (check_str.find(c) != string::npos)
            {
                has_duplicate = true;
                break;
            }
            check_str += c;
        }

        if (get_sbstr.find(s.front()) != string::npos || 
            get_sbstr.find(s.back()) != string::npos || 
            has_duplicate
        )
        {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

// https://codeforces.com/contest/2121/problem/B