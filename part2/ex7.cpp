#include <iostream>
using namespace std;

int main()
{
    string password = "admin123";
    string yourpassword;
    string username = "Nakk47";
    string yourusername;

    int i = 2;
    while (i >= 0)
    {
        cout << "input your password: ";
        cin >> yourpassword;
        cout << "input your username: ";
        cin >> yourusername;
        if (password == yourpassword && username == yourusername)
        {
            cout << "correct";
        }
        else
        {
            cout << "incorrect" << endl;
            cout << "you have only " << i << " attempts" << endl;
        }
        i--;
    }

    return 0;
}