#include <iostream>
using namespace std;
class ReverseNumber
{

private:
    int no;
    int reverse;

public:
    void set(int x)
    {
        no = x;
    }
    int calculate_reverse()
    {
        reverse = 0;
        int temp = no;
        while (temp != 0)
        {
            reverse = reverse * 10 + temp % 10;
            temp = temp / 10;
        }
        return reverse;
    }

public:
    int getNo()
    {
        return no;
    }
    int getReverse()
    {
        return calculate_reverse();
    }
};
int main()
{
    ReverseNumber r;
    r.set(123);
    r.calculate_reverse();
    cout << "Reverse of " << r.getNo() << " is " << r.getReverse() << endl;
    return 0;
}