#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;

    char c1 = 'c';
    char c2 = 'a';
    char c3 = 't';

    bool found = true;

    for (char c : s)
    {
        if (c == c1 || c == c2 || c == c3)
        {
            found = true;
        } else {
            found = false;
            break;
        }
    }

    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}