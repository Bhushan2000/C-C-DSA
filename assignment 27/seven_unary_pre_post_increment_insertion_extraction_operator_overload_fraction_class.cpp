#include <iostream>
using namespace std;
class fraction
{
private:
    long numerator;
    long denominator;

public:
    fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }
    // void input()
    // {
    //     cout << ".........................." << endl;
    //     cout << "f1  :  0/0" << endl;
    //     cout << "f2  :  0/0" << endl;
    //     cout << endl;
    //     cout << "Enter fraction value" << endl;
    //     cout << endl;
    //     cout << "Numerator      :   ";
    //     cin >> numerator;
    //     cout << "Denominator    :   ";
    //     cin >> denominator;
    //     cout << endl;
    // }

    // pre increment
    fraction operator++()
    {
        fraction f;
        f.numerator = ++numerator;
        f.denominator = ++denominator;
        return f;
    }
    // post increment
    fraction operator++(int n)
    {
        fraction f;
        f.numerator = numerator++;
        f.denominator = denominator++;
        return f;
    }

    void display()
    {
        cout << "  :  " << numerator << "/" << denominator << endl;
    }
    friend ostream &operator<<(ostream &os, fraction &f);
    friend istream &operator>>(istream &os, fraction &f);
};

ostream &operator<<(ostream &os, fraction &f)
{ // we have to return ostreaam object in this case "cout<<f<<f2";
    os << "Numerator : " << f.numerator << endl
       << "Denominator : " << f.denominator << endl;
    return os;
}
istream &operator>>(istream &in, fraction &obj)
// Pass the object by reference to enable modification of the object's state within the overloaded function.
// Passing by reference avoids unnecessary copying of the object, which can be inefficient especially for large objects.

// In this example, the operator>> function is overloaded to extract data into the "fraction" class object. By passing obj by reference,
// the function can directly modify the data member of the object. If you were to pass obj by value instead, any modifications made within the function would only affect the local copy of obj, not the original object in main().
{
    cout << "Numerator      : ";
    in >> obj.numerator;
    cout << endl;
    cout << "Denominator    : ";
    in >> obj.denominator;
    cout << endl;
    return in;
}

// Unary ++f(pre and post both)
// overload as a friend function : operator<<, operator>>

int main()
{
    fraction f, f2;
    cout << "f1  :  0/0" << endl;
    cout << "f2  :  0/0" << endl;
    cout << endl;

    cout << "Enter 1st fraction value" << endl;
    // f.input();
    cout << endl;
    cin >> f;

    f++;
    cout << "f1++";
    f.display();

    ++f;
    cout << "++f1";
    f.display();
    cout << endl;

    cout << "Enter 2nd fraction value" << endl;
    // f.input();
    cout << endl;
    cin >> f2;

    f2 = ++f;
    cout << "f2 = ++f1" << endl;
    cout << "f1";
    f.display();
    cout << "f2";
    f2.display();

    f2 = f++;
    cout << endl;
    cout << "f2 = f1++" << endl;
    cout << "f1";
    f.display();
    cout << "f2";
    f2.display();

    // fraction f3;
    // cout << f << f2;
    // // error: no match for 'operator<<' (operand types are 'std::ostream {aka std::basic_ostream<char>}' and 'fraction')
    // cin >> f3;
    // // error: no match for 'operator>>' (operand types are 'std::istream {aka std::basic_istream<char>}' and 'fraction')
    // cout << f3;
    return 0;
}