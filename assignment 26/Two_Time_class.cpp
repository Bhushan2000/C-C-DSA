#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int min;
    int sec;

public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
    // Normalization my approach
    // void normalize()
    // {
    //     // 7:65 min
    //     // normalize to 8:05
    //     // subtract 60 min from 65 min and add it to hr
    //     if (min > 60)
    //     {
    //         min = min - 60;
    //         hour++;
    //     }
    //     if (sec > 60)
    //     {
    //         sec = sec - 60;
    //         min++;
    //     }
    // }
    // another version of doing same task for normalization
    // Learn from Prateek sir
    void normalize()
    {
        // 7:65 min
        // normalize to 8:05
        // subtract 60 min from 65 min and add it to hr

        min = min + sec / 60;
        sec = sec % 60;
        hour = hour + min / 60;
        min = min % 60;
    }
    // Pro tip : we have already normalize functin which takes care for the normalization part so we do not need to do again while adding.
    // Time add(Time t)
    // {
    //     Time temp;
    //     temp.sec = sec + t.sec;
    //     if (temp.sec > 60)
    //     {
    //         temp.sec = temp.sec - 60;
    //         min++;
    //     }
    //     temp.min = min + t.min;
    //     if (temp.min > 60)
    //     {
    //         temp.min = temp.min - 60;
    //         hour++;
    //     }
    //     temp.hour = hour + t.hour;
    //     return temp;
    // }
    Time add(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min;
        temp.hour = hour + t.hour;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t, t1, t2; // called default constructor // garbage
    t1.setTime(5, 50, 30);
    t2.setTime(7, 20, 34);
    t = t1.add(t2); // ans 13:11:04
    //  addtion
    cout << "Addition of time" << endl
         << endl;
    t1.showTime();
    t2.showTime();
    cout << "......." << endl;
    t.showTime();

    // Normalize
    Time t3;
    t3.setTime(7, 65, 100);
    t3.normalize();
    t3.showTime();
    return 0;
}