#include <iostream>

using namespace std;

class fraction
{
public:
     int nu;
     int de;

    void in()
    {
        cin >> nu;
        cin >> de;
    }

    int add()
    {
        return nu+de;
    }

    void print()
    {
        cout << add();
    }
};

int main()
{
    fraction z;
    z.in();
    z.add();
    z.print();

}
