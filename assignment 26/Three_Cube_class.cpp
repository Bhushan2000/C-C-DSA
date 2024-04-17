#include <iostream>
using namespace std;
class Cube
{
private:
    double side;

public:
    Cube()
    {
        cout << "Default Constructor Called" << endl;
    }
    // initialized side in the default constructor
    Cube(double s)
    {
        cout << "Paramatrized Constructor Called" << endl;
        side = s;
    }
    ~Cube()
    {
        cout << "Destructor Constructor Called for " << side << endl;
    }
    void setSide(double c)
    {
        side = c;
    }
    int getside()
    {
        return side;
    }

    void showVolume()
    {
        cout << "Volume of Cube = " << volume() << endl;
    }
    int volume()
    {
        return (side * side * side);
    }
};
int main()
{
    Cube c1(2.34); // Paramatrized constructor
    Cube c2;       // Default constructor
    double side;
    c1.volume();
    c1.showVolume();

    // take side from the user
    cout << "Enter the side of the cube: ";
    cin >> side;
    c2.setSide(side);
    c2.volume();
    c2.showVolume();
    return 0;
}