#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'p') {
                s[i] = 'q';
            } else if (s[i] == 'q') {
                s[i] = 'p';
            }
        }

        // for (char &c: s)
        // {
        //     if (c == 'p') {
        //         c = 'q';
        //     } else if (c == 'q') {
        //         c = 'p';
        //     }
        // }

        cout << s << endl;
    }
    
    return 0;
}

// https://codeforces.com/problemset/problem/2044/B