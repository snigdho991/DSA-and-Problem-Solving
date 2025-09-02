#include <iostream>
using namespace std;

class Student {
    public:
    int roll;

    Student() = default;
    void print () {
        cout << "Roll : " << roll;
    }
};

void fun (Student a[], int n) {
    for (int i = 0; i < n; i++)
    {
        a[i].roll = 7;
        // (a + i)->roll = 10;
        // (*(a + i)).roll = 8;
    }
    
}

int main () {
    Student * a = new Student[5];
    fun(a, 6);

    a[0].print();

    return 0;
}