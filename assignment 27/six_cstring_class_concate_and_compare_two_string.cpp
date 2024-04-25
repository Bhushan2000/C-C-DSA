#include <iostream>
#include <cstring>
using namespace std;
class cstring
{
    // a) Overload the + operator to concatenate two strings.
    // b) == to compare 2 strings.
private:
    char *pt;
    int size;

public:
    // default constructor
    cstring()
    {
        cout << "Default constructor called" << endl;
        pt = (char *)malloc(1);
        size = 1;
    }
    // Paramatrized constructor
    cstring(const char *st)
    {
        cout << "Paramatrized constructor called" << endl;
        size = strlen(st);
        pt = (char *)malloc(size + 1);
        // deep copy
        strcpy(pt, st);
    }
    // copy constructor
    cstring(const cstring &st)
    {
        cout << "Copy constructor called" << endl;
        size = strlen(st.pt);
        pt = (char *)malloc(size + 1);
        // deep copy
        strcpy(pt, st.pt);
    }
    // assignment operator overload
    cstring &operator=(const cstring &st)
    // we have to return reference in this case
    // str3 = str4 = str;
    {
        cout << "assignment operator called" << endl;
        if (pt == st.pt) // checking LHS=RHS if exit then we not copy return current object
        {
            return *this;
        }
        // if object point to another memory location
        // then first free up existing memory location
        free(pt);
        size = strlen(st.pt);
        pt = (char *)malloc(size + 1);
        strcpy(pt, st.pt);
        return *this;
    }
    void display()
    {
        printf("address : %d ", pt);
        cout << pt << endl;
    }
    cstring operator+(const cstring c)
    {
        cout << "Operator+ called" << endl;
        return strcat(pt, c.pt);
    }
    int operator==(const cstring c)
    {
        return strcmp(pt, c.pt);
        // -1 dictionary order
        // 1 opposite dictionary order
        // 0 // equal
    }
};
int main()
{
    cstring str("Bhushan");
    str.display();
    cstring str2;
    str2 = str; // shallow copy by assignment operator
    str2.display();
    cstring str3 = str; // copy constructor
    str3.display();

    cstring str4("Hello");
    cout << endl;
    cstring str6;
    // "+" operator overlaod
    str6 = str4 + str;
    str6.display();
    //(str4 + str).display();
    //          "or you can write"        //
    // cstring temp = str4 + str;
    // temp.display();
    cstring str5("Bhushan");
    // == operator overload
    if (str == str5) // 0 means equal //-1 or 1 means not equal
        // error: no match for 'operator==' (operand types are 'cstring' and 'cstring')
        cout << "Different" << endl;
    else
        cout << "Equal" << endl;
    return 0;
}