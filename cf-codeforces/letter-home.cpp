#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for (int &x: a)
        {
            cin >> x;
        }

        if (a.front() == s) 
        {
            cout << a.back() - a.front() << endl;
        } else if (a.back() == s) {
            cout << a.back() - a.front() << endl;
        } else {
            if (a.front() < s && a.back() > s)
            {
                int back = 2 * (s - a.front());
                int front = a.back() - s;
                int left = back + front;

                int back_two = 2 * (abs(s - a.back()));
                int front_two = s - a.front();
                int right = back_two + front_two;

                if (left < right)
                {
                    cout << left << endl;
                } else {
                    cout << right << endl;
                }

            } else {
                if (s > a.front())
                {
                    cout << s - a.front() << endl;
                } else if(s < a.front()) {
                    cout << a.back() - s << endl;
                }
            }
            
        }
        
    }
    
    return 0;
}

// https://codeforces.com/contest/2121/problem/A