#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int result[4];
    cout << "input two number";
    cin >> a >> b;
    result[0] = a + b;
    result[1] = a - b;
    result[2] = a * b;
    result[3] = a / b;
    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << "\n" ;
    }
    return 0;
}