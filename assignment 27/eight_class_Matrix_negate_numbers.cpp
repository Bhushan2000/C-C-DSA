#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
    // methods;
    Matrix()
    {
        a[3][3] = {0};
    }
    void display()
    {
        cout << "Matrix is :" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "    " << a[i][j];
            }
            cout << endl;
        }
    }

    void input()
    {
        cout << "Enter the matrix element (3 X 3) :" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void operator-()
    {
        // cout << "Matrix is :" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                //cout << "    " << -a[i][j];
                a[i][j] = -a[i][j];
            }
            cout << endl;
        }
    }
};
int main()
{
    Matrix m;
    m.input();
    m.display();
    -m;
    m.display();
    // error: no match for 'operator-' (operand type is 'Matrix')
    return 0;
}