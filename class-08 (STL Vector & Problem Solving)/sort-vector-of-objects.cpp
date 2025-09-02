#include <iostream>
using namespace std;


class Students 
{
    public:
    int roll, marks;
    Students(int roll, int marks)
    {
        this->roll = roll;
        this->marks = marks;
    }
};

bool cmpr(Students a, Students b)
{
    if (a.marks > b.marks) return true;
    else if (a.marks < b.marks) return false;
    else
    {
        if (a.roll < b.roll) return true;
        else return false;
    }
}

int main () {
    int n;
    cin >> n;

    vector<Students> v;
    for (int i = 0; i < n; i++)
    {
        int roll, marks;
        cin >> roll >> marks;
        v.push_back(Students(roll, marks));
    }

    sort(v.begin(), v.end(), cmpr);

    for (Students x: v)
    {
        cout << x.roll << " " << x.marks << endl;
    }
    
    return 0;
}