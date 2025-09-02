#include <iostream>
using namespace std;

int main () {

    // Declare
    vector<int> v;
    // vector<int> v2 = {1, 2, 3, 4, 5};
    // vector<int> v3(5);
    // vector<int> v4(5, 1);

    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(1);
    v.push_back(3);
    v.pop_back();

    cout << v.size() << " " << v.capacity();

    return 0;
}