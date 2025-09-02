#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin>>n;

        int a[n];
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
            sum += a[j];
        }

        // bool isSquare = false;
        // for (long long k = 1; k * k <= sum; k++)
        // {
        //     if (k * k == sum) 
        //     {
        //         isSquare = true;
        //         break;
        //     }
        // }

        // if (isSquare) {
        //     cout<<"YES"<<endl;
        // } else {
        //     cout<<"NO"<<endl;
        // }

        long long root = sqrt(sum);
        if (root * root == sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }

    return 0;

}

// https://codeforces.com/contest/1915/problem/C