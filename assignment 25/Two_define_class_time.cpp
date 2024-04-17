#include <iostream>
using namespace std;
class Time
{
    // like 3 hr 45 min 20 sec
private:
    int hr;
    int min;
    int sec;

public:
    void set(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void print(Time t)
    {
        cout << hr << " hr " << min << " min " << sec << " sec " << endl;
        cout << t.hr << " hr " << t.min << " min " << t.sec << " sec " << endl;
    }
};

int main()
{
    Time t1, t2;
    t1.set(2, 50, 45);
    t2.set(4, 12, 20);
    t1.print(t2); // t1 is passed implicitly and t2 passed explicitly
    return 0;
}