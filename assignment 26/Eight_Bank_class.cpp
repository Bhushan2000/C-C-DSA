#include <iostream>
using namespace std;
class Bank
{
private:
    int principal, rate_of_interest, year;
    int si;

public:
    Bank(int p, int r, int y)
    {
        principal = p;
        rate_of_interest = r;
        year = y;
    }
    void setData(int p, int r, int y)
    {
        principal = p;
        rate_of_interest = r;
        year = y;
    }
    void calculate_si()
    {
        si = (principal * rate_of_interest * year) / 100;
    }
    int getSI()
    {
        return si;
    }
    int getPrincipal()
    {
        return principal;
    }
    int getRateOfInterest()
    {
        return rate_of_interest;
    }
    int getYear()
    {
        return year;
    }
};
int main()
{
    Bank b(1000, 5, 1);
    b.calculate_si();
    cout << b.getSI();
    return 0;
}