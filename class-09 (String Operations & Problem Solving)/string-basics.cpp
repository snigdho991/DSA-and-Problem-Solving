#include <iostream>
#include <string>
using namespace std;

int main () {

    // Declare
    string s1;
    string s2 = "hello";
    string s3("world");
    string s4(5, 'x');

    // Copy string by constructor
    string s5 = s2;
    s4.shrink_to_fit();
    // cout << s4.capacity() << endl;
    // cout << s3.size() << endl;
    // cout << s3.length() << endl;

    s3.push_back('!'); // amortized O(1)
    s2.append(" earth"); // amortized O(N)
    s1 += "world";

    // cout << s2[0];
    // cout << s2.at(0);
    // cout << s3.front();
    // cout << s1.back();
    
    // for (char &c: s2)
    // {
    //     cout << c;
    // }
    
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     cout << s1[i];
    // }

    // cout << s1;
    
    return 0;

}