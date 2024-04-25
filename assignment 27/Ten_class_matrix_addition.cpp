#include <iostream>
using namespace std;
class Matrix
{
private:
    int arr[3][3];

public:
    // default constructor
    Matrix()
    {
        arr[3][3] = {0};
    }
    // input of matrix
    void input()
    {
        cout << "Enter matrix element (3 X 3) : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                // cout << "enter no " << arr[i][j] << endl;
                cin >> arr[i][j];
            }
        }
    }
    // display of matrix
    void display()
    {
        cout << "Matrix : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "    ";
            }
            cout << endl;
        }
    }
    // operator+ overload
    Matrix operator+(Matrix m)
    {
        Matrix ma;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ma.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return ma;
    }
};
int main()
{
    Matrix m1, m2, m3;
    m1.input();
    m2.input();

    // m3=m1+m2
    m3 = m1 + m2;

    m1.display();
    m2.display();
    cout << "Addition of ";
    m3.display();

    return 0;
}