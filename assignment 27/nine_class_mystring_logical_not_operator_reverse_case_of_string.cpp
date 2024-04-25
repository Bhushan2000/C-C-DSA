#include <iostream>
using namespace std;
class mystring
{
private:
    char str[100];

public:
    // default constructor

    void input()
    {
        cout << "Enter the string : ";
        cin >> str;
    }
    void display()
    {
        cout << str << endl;
    }
    mystring operator!()
    {
        for (int i = 0; str[i]; i++)
        {
            if (str[i] >= 97 && str[i] <= 122) // a-z
            {
                str[i] = str[i] - 32;
            }
            else if (str[i] >= 65 && str[i] <= 90) // A-Z
            {
                str[i] = str[i] + 32;
            }
        }
    }

    // ascii code for "A-65" "Z-90"
    // ascii code for "a-97" "z-122"
};
int main()
{
    mystring obj, obj2;
    obj.input();
    cout << "String before reverse : ";
    obj.display();  
    !obj;
    // error: no match for 'operator!' (operand type is 'mystring')
    cout << "String after reverse : ";
    obj.display();
    return 0;
}