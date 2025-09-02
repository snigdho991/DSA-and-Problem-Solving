#include <iostream>
using namespace std;

int main () {
    string a, b;
    cin >> a >> b;

    vector<int> freqOne(26, 0);
    vector<int> freqTwo(26, 0);

    for (char &c: a)
    {
        freqOne[c - 'a']++;
    }

    for (char &c: b)
    {
        freqTwo[c - 'a']++;
    }

    bool isAnagram = true;
    for (int i = 0; i < 26; i++)
    {
        if (freqOne[i] != freqTwo[i])
        {
            isAnagram = false;
        }
    }
    
    if (isAnagram)
    {
        cout << "Anagram";
    } else {
        cout << "Not Anagram";
    }

    return 0;

}

// a - 'a' = 97 - 97 = 0; // converting to int
// z - 'a' = 123 - 97= 26;