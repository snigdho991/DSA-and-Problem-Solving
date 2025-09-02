#include <iostream>
using namespace std;

class Student {

    public:
    string name;
    int roll;
    char section;

    int arr[10];

    Student (string name) {
        this->name = name;
    }

    void print () {
        cout << "Name : " << name;
    }

};

void fun (Student * obj) {
    obj->name = "Majumder"; 
}

int main () {

    // Static object
    // Student obj("Snigdho");
    // obj.print();


    // Dynamic object
    // Student * obj = new Student("Snigdho");
    // fun(obj); // Class er bairer method
    // delete obj;
    // obj->print();


    // SIZE
    Student obj("Snigdho");
    cout << sizeof(obj);

    return 0;
}