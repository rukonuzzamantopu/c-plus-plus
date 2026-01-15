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
    Student fun()
    {
        Student s1("Alice", 20, 85.5);
        return s1;
    }
};

int main()
{

    Student s1 = s1.fun();
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;
 
    return 0;
}