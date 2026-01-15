#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int age;
    float marks;
};
int main()
{
    Student s1, s2;

    cin.getline(s1.name , 50);
    cin >> s1.age >> s1.marks;
    cin.ignore();
    cin.getline(s2.name, 50);
    cin >> s2.age >> s2.marks;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Marks: " << s2.marks << endl;

    return 0;
}