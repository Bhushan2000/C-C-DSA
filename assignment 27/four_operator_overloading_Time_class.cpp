#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = min = sec = 0;
    }
    ~Time() {}
    // 1. == : To check whether two Times are the same or not.
    // 2. >> : To accept the time.
    // 3. << : To display the time.

    // This is my approach
    // int operator==(Time t)
    // {
    //     if (hr == t.hr)
    //     {
    //         if (min == t.min)
    //         {
    //             if (sec == t.sec)
    //             {
    //                 return 1;
    //             }
    //         }
    //     }
    //     return 0;
    // }

    // This is new approach
    int operator==(Time t)
    {
        // convert time to seconds then compare
        return hr * 3600 + min * 60 + sec == t.hr * 3600 + t.min * 60 + t.sec ? 1 : 0;
    }
    // insertion and extraction operator ko hum keval friend function banakr hi oveload kr sakte hai
    friend void operator<<(ostream &os, Time &t);
    friend int operator>>(istream &is, Time &t);

    // void input()
    // {
    //     cout << "Enter Time" << endl;
    //     cout << "----------------" << endl;
    //     cout << "Enter Hours     :   ";
    //     cin >> hr;
    //     cout << "Enter Minutes   :   ";
    //     cin >> min;
    //     cout << "Enter Seconds   :   ";
    //     cin >> sec;
    // }
    // void display()
    // {
    //     cout << endl;
    //     cout << "First Time" << endl;
    //     cout << "Hour     : " << hr << endl;
    //     cout << "Minutes  : " << min << endl;
    //     cout << "Seconds  : " << sec << endl;
    // }
};
void operator<<(ostream &os, Time &t)
{
    os << "Hourr    : " << t.hr << endl
       << "Minutes  : " << t.min << endl
       << "Sec      : " << t.sec << endl;
}
int operator>>(istream &is, Time &t)
{
    cout << "Enter Hour : ";
    is >> t.hr;
    cout << "Enter Minutes : ";
    is >> t.min;
    cout << "Enter Seconds : ";
    is >> t.sec;

    // Normalize the time
    t.min = t.min + t.sec / 60;
    t.sec = t.sec % 60;
    t.hr = t.hr + t.min / 60;
    t.min = t.min % 60;

    if (t.hr >= 25)
        return 1;
    else
        return 0;

    // and add checking condition for hr not greater than the 24 hr
}
int main()
{
    Time t1, t2;
    cout << "Enter first time" << endl;
    cout << "................" << endl;
    if (cin >> t1) // if 1 then print invalid time
    {
        cout << "Invalid value" << endl;
        return 0;
    }
    cout << endl;
    cout << "First Time" << endl;
    cout << t1;
    cout << endl;

    cout << "Enter second time" << endl;
    cout << "................" << endl;
    if (cin >> t2)
    {
        cout << "Invalid value" << endl;
        return 0;
    }
    cout << endl;
    cout << "Second Time" << endl;
    cout << t2;
    cout << endl;

    t1 == t2 ? cout << "Time are same" : cout << "Time are different";
    // error: no match for 'operator==' (operand types are 'Time' and 'Time')
    return 0;
}