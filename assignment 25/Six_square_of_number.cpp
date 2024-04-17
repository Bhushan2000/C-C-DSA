#include <iostream>
using namespace std;
class Square
{

private:
    int no;
    // I miss this part of the question
    static int count;

public:
    void set(int x)
    {
        no = x;
    }

private:
    int square(int no)
    {
        return no * no;
    }

public:
    void print()
    {
        cout << "Square of " << no << " is " << square(no) << endl;
    }
};
// to get the memory to the static variable we need to define static variable outside the class
int Square::count = 0; // to get the memory to the static variable 
int main()
{
    Square r;
    r.set(5);
    r.print();
    return 0;
}