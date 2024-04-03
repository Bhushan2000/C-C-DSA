#include <iostream>
using namespace std;
void highest_value(int);
int main()
{
    int no;
    cout << "Enter the value:" << endl;
    cin >> no;
    highest_value(no);
    return 0;
}
void highest_value(int no)
{
    int high = 0, temp;
    while (no != 0)
    {
        temp = no % 10;
        no = no / 10;
        if (temp > high)
            high = temp;
    }
    cout << "Highest value in the number is " << high;
}