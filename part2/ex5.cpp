#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "input number ";
    cout << "(whether it is a multiple of 3 and 5) : ";
    cin >> a;
    if (a % 3==0 && a % 5==0)
    {
        cout << "right";
    }
    else
    {
        cout << "wrong";
    }
    return 0;
}