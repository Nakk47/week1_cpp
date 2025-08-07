#include <iostream>
using namespace std;

int main()
{
    string password = "admin123";
    string yourpassword;
    cout << "input your password: ";
    cin >> yourpassword;
    if (password == yourpassword)
    {
        cout << "it correct";
    }
    else
    {
        cout << "incorrect password";
    }
    return 0;
}