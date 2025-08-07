#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b, result;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice:";
    cin >> choice;

    cout << " number 1:";
    cin >> a;
    cout << " number 2";
    cin >> b;
   if (choice == 1)
        result = a + b;
    else if (choice == 2)
        result = a - b;
    else if (choice == 3)
        result = a * b;
    else if (choice == 4) {
        if (b != 0)
            result = a / b;
        else {
            cout<<"Error: Division by zero\n";
            return 1;
        }
    } else {
     cout<<"Invalid choice\n";
        return 1;
    }

    cout<<"Result: %.2f\n", result;
    return 0;
}
