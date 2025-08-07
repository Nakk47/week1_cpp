#include <iostream>
using namespace std;

int main()
{
    string name;
    float gpa;
    int age;
    cout << "enter your  name:  ";
    getline(cin, name);
    cout << "enter your age: ";
    cin >> age;
    cout << "enter your gpa: ";
    cin >> gpa;
    cout << "Name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "gpa:" << gpa;
    return 0;
}