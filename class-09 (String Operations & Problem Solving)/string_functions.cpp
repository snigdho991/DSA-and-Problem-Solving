#include <iostream>
#include <numeric>
using namespace std;

int main () {
    string s = "hello world";

    // int idx = s.find("l");
    // int idx = s.find_first_of("o");
    // int idx = s.find_last_of("o");
    // int idx = s.find_first_not_of("o");
    // int idx = s.find_last_not_of("d");
    // cout << idx << endl;

    // s.insert(0, "H");
    // s.insert(s.size(), "!!");
    // s.insert(s.end(), '!'); // pointer -> char, index -> string
    // s.erase(0, 5);
    // s.erase(s.begin(), s.begin()+2);
    // s.replace(0, 5, "Hi");
    // s.replace(s.begin(), s.begin()+5, "Hi");

    s.push_back('!');
    // s.pop_back();
    // s.clear();

    // if (s.empty())
    // {
    //     cout << "empty";
    // }


    // String Iterator
    // string::iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it;
    // }


    // Sort & Reverse string
    // sort(s.begin(), s.end());
    // sort(s.begin(), s.end(), greater<char>());
    // reverse(s.begin(), s.end());


    // Unique Characters
    // string s = "eeeedbcccdbbbbdccaaabbbbaaa";
    // sort(s.begin(), s.end()); // to remove consecutives, that's why sort()
    // string::iterator last;
    // last = unique(s.begin(), s.end()); // removes consecutives chars only !
    // s.erase(last, s.end());


    // Min & Max Chars
    // auto it_min = min_element(s.begin(), s.end());
    // auto it_max = max_element(s.begin(), s.end());
    // cout << *it_min << *it_max;


    // Count Chars
    // int cnt = count(s.begin(), s.end(), 'o'); // Without iterator
    // cout << cnt;


    // Fill String with Char
    // fill(s.begin(), s.end(), '*');


    // Rotate - Left & Right
    string s2 = "abcde";
    // rotate(s2.begin(), s2.begin()+3, s2.end());
    // rotate(s2.begin(), s2.end() - 3, s2.end());


    // Sum
    // int sum = accumulate(s2.begin(), s2.end(), 0);
    // cout << sum << endl;


    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }
    for (char c: s2)
    {
        cout << c;
    }
    
    return 0;
}