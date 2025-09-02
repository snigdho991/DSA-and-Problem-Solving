#include <iostream>
#include <cctype>
using namespace std;

int main () {
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        char str[100];
        cin.getline(str, 100);

        char temp = str[0];
        cout << (char)tolower(temp);

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (isspace(str[i]) && str[i + 1] != '\0') {
                cout << (char)tolower(str[i + 1]);
            }
        }

        cout << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2094/problem/A