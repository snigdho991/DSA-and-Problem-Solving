#include <iostream>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    int idx = s.find_last_of('/');
    string path = s.substr(idx + 1);
    cout << path;

    return 0;
}