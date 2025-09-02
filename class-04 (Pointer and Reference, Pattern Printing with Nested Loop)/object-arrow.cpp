#include<iostream>
using namespace std;

class Student 
{
    public:
    int a, b;

    Student(int a, int b) {
        // (*this).a = a; // Dereference of pointer
        this->a = a;
        this->b = b;
    }
};

int main () {
    Student obj(20, 40);
    cout<<obj.a<<" "<<obj.b<<endl;
}