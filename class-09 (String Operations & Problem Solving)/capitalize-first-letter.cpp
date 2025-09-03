#include <iostream>
#include <sstream>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    stringstream ss;
    ss << s;

    string word, ans;

    while (ss >> word)
    {
        word[0] = toupper(word[0]);
        ans += word;
        ans += " ";
    }
    ans.pop_back();

    cout << ans;

    return 0;
    
}