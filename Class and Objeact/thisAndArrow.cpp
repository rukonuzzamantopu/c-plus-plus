#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int age;
    float marks;

    Student(const char *name, int age, float marks)
    {
        strcpy(this->name, name);
        this->age = age;
        this->marks = marks;
    }
};

int main()
{
    
    Student s1("Alice", 20, 85.5);
    Student s2("Bob", 22, 90.0);
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Marks: " << s2.marks << endl;
    return 0;
}