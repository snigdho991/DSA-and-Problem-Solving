#include <iostream>
using namespace std;

int main () {
    int t;
    cin>>t;

    while (t--) {
        int nf, noc;
        cin>>nf>>noc;

        int arr[100];
        int equal = 0;
        
        for (int i = 1; i <= nf; i++) {
            cin>>arr[i];
        }

        sort(arr + 1, arr + nf + 1);
    
        int min = arr[1];
        int cnt = 0;
        int eq = 0;
        int temp = noc;

        for (int i = 1; i <= nf; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }

            if (min > noc) {
                eq = min - noc;
                noc = min;
            }

            if (arr[i] == noc) {
                noc++;
                cnt++;
            }
        }

        cout<<cnt + eq;
        cout<<endl;
        
    }

    return 0;

}

// https://www.codechef.com/problems/MORECOOK


// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         int nf, noc;
//         scanf("%d %d", &nf, &noc);

//         int arr[100];
//         for (int i = 1; i <= nf; i++) {
//             scanf("%d", &arr[i]);
//         }

//         int temp = noc;
//         int extra = 0;

//         while (true) {
//             int minVal = arr[1];
//             int equalCount = 0;
//             bool hasLess = false;

//             for (int i = 1; i <= nf; i++) {
//                 if (arr[i] < noc) {
//                     hasLess = true;
//                 }
//                 if (arr[i] == noc) {
//                     equalCount++;
//                 }
//                 if (arr[i] < minVal) {
//                     minVal = arr[i];
//                 }
//             }

//             if (hasLess && equalCount == 0) {
//                 printf("%d\n", extra);
//                 break;
//             }

//             noc++;   
//             extra++;
//         }
//     }

//     return 0;
// }

