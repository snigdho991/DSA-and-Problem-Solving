#include <iostream>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    for (char &c: s)
    {
        if (c == ' ')
        {
            c = '-';
        }
    }

    cout << s;

    return 0;
    
}