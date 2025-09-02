#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int space = 1;
    int k = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = k; j <= n; j++) {
            cout<<j;
        }
        for (int j = 1; j <= space; j++) {
            cout<<" ";
        }
        for (int j = n; j >= k; j--) {
            cout<<j;
        }
        cout<<endl;

        k++;
        space+=2;
    }
}