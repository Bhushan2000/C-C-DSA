#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    // if you are using c++ my suggestion is to use the string instead of the char array.
    string firstName;
    char lastName[50] = "Singh";
    int roll_no;
    int marks;
    char grade;
    string address;

public:
    Student(string f, int r, int m, char g, string ad)
    {
        firstName = f;
        //  strcpy(lastName, l); // for character array
        roll_no = r;
        marks = m;
        grade = g;
        address = ad;
    }
    Student();

    void setData(int r, int m)
    {
        roll_no = r;
        marks = m;
    }

    void showData()
    {
        cout << "Student details: " << endl
             << " Name = " << firstName
             << " " << lastName << endl
             << " roll_no = " << roll_no << endl
             << " marks = " << marks << endl;
    }
};
Student ::Student()
{
    char newName[50] = "Waghdhare";
    roll_no = 21;
    marks = 95;
    firstName = "Bhushan";     // while using string in c++
    strcpy(lastName, newName); // while using char array
}
int main()
{
    Student s, s1("Arijit", 21, 95, 'A', "Gaziyabad UP");
    s.showData();
    s1.showData();
    return 0;
}