#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    
    int star = 1;
    int space = n-1;

    for (int i = 1; i <= 2*n-1; i++) {

        for (int j = 1; j <= space; j++) {
            cout<<" ";
        }

        for (int j = 1; j <= star; j++) {
            cout<<"*";
        }
        
        cout<<endl;

        if (i < n) {
            star+=2;
            space--;
        } else {
            star-=2;
            space++;
        }
    }

    return 0;
}