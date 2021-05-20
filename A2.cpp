#include <iostream>

using namespace std;

class fraction
{
public:
    int nu;
    int de;

    fraction(int a,int b)
    {
        nu=a;
        de=b;
        cout << a <<"/" << b;
    }

};

int main()
{
    int z,zz;
    cin >> z >> zz;

    fraction f1(z,zz);

}


















