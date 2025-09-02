#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string s;
    // cin >> s;
    getline(cin, s);

    int x;
    cin >> x;

    // stringstream ss;
    // ss << s;
    // string word;

    // while (ss >> word)
    // {
    //     cout << word << " ";
    // }

    // string sub = s.substr(4, 5);
    string sub = s.substr(6);
    cout << sub;
    


    // for (char c: s)
    // {
    //     cout << c;
    // }
    // cout << endl << x;

    return 0;
}