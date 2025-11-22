#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int total_marks;
};
bool compareStudents(const Student &a, const Student &b)
{
    if (a.total_marks == b.total_marks)
    {
        return a.id < b.id;
    }
    return a.total_marks > b.total_marks;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        vector<Student> students(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].total_marks;
        }
        sort(students.begin(), students.end(), compareStudents);
        cout << students[0].id << " " << students[0].name << " " << students[0].section << " " << students[0].total_marks << "\n";
    }

    return 0;
}