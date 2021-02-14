/* TODO: Student class program */

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    typedef int Marks;
    int rollNumber;
    string name;
    Marks maths;
    Marks physics;
    Marks chemistry;

public:
    Student()
    {
        rollNumber = 0;
        maths = 0;
        physics = 0;
        chemistry = 0;
        name = "";
    }

    Student(int rollNumber, string name, int maths, int physics, int chemistry)
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->maths = maths;
        this->physics = physics;
        this->chemistry = chemistry;
    }

    void totalMarks();

    void grade();
};

void Student::totalMarks()
{
    cout << "Total Marks obtained: " << maths + physics + chemistry << " out of " << 300 << endl;
}

void Student::grade()
{
    int total = maths + physics + chemistry;

    if (total >= 70)
    {
        cout << "Grade A" << endl;
    }
    else if (total >= 50 || total < 70)
    {
        cout << "Grade B" << endl;
    }
    else
    {
        cout << "Grade C" << endl;
    }
}

int main()
{
    Student s1(200, "Archit", 90, 99, 89);
    s1.totalMarks();
    s1.grade();

    return 0;
}
