#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;


    // USING TWO POINTERS
    // int i = 0, j = s.size() - 1;

    // bool isPalin = true;

    // while(i < j)
    // {
    //     if (s[i] != s[j])
    //     {
    //         isPalin = false;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }

    // if (isPalin)
    // {
    //     cout << "Palindrome";
    // } else {
    //     cout << "Not palindrome";
    // }


    // USING SL FUNCTIONS
    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev)
    {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }


    return 0;
}