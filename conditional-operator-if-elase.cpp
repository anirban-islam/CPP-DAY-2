#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter The value of A : ";
    cin >> a;
    cout << "Enter The value of B : ";
    cin >> b;

    // conditional operator
    //if(condition) { working code }

    if (a > b)
    {
        cout << "Value A is Greater than B";
    }
    else if (b > a)
    {
        cout << "Value B is Greater than A";
    }
    else if (a == b)
    {
        cout << "Value A is Equal to B";
    }

    return 0;
}
