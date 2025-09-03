#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;

    // Time - O(N) Space - O(1)
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s.erase(i, 1);
            i--; // after erasing the index changes, that's why
        }
    }

    cout << s;

    // Time - O(N) Space - O(N)
    // string ans = "";
    // for (char &c: s)
    // {
    //     int idx = string("aeiou").find(c);

    //     if (idx == -1)
    //     {
    //         ans += c;
    //     }
    // }
    // cout << ans;

    return 0;
}