#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    Date()
    {
        day = 13;
        month = 04;
        year = 2024;
    }
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void showDate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
};
int main()
{
    //  Date d(11, 02, 2024);
    Date d;
    d.showDate();
    return 0;
}
