#include <iostream>
using namespace std;
class Bill
{
private:
    int consumer_no;
    // char *name[20];    // array of pointer
    //  char (*name2)[20]; // pointer to array
    char consumer_name[30];
    float units_consumed;
    float bill_calculated;

public:
    // void setData(int cus_no, char *n, float unit_con)
    // {
    //     consumer_no = cus_no;
    //     consumer_name = n;
    //     units_consumed = unit_con;
    // }
    void input()
    {
        cout << "Enter consumer no : ";
        cin >> consumer_no;
        cout << "Enter consumer name : ";
        cin >> consumer_name;
        cout << "Enter units consumed : ";
        cin >> units_consumed;
    }
    void getDetails()
    {
        cout << "Consumer_no: " << consumer_no << endl
             << "Consumer_name: " << consumer_name << endl
             << "Units_consumed: " << units_consumed << endl;
    }
    float calculateBill()
    {
        float temp;
        if (units_consumed <= 100)
        {
            bill_calculated = units_consumed * 1.20;
        }
        else if (units_consumed > 100 && units_consumed < 200)
        {
            temp = units_consumed - 100;
            bill_calculated = temp * 2 + 100 * 1.20;
        }
        else if (units_consumed > 200)
        {
            temp = units_consumed - 200;
            bill_calculated = temp * 3 + 100 * 2 + 100 * 1.20;
        }
        return bill_calculated;
    }
};
int main()
{
    Bill b;
    b.input();
    b.getDetails();
    cout << "Bill Calculated: " << b.calculateBill();

    return 0;
}