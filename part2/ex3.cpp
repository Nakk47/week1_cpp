#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"input number: ";
    cin>>a;
    if(a==0){
        cout<<"it zero";
    }else if(a>0){
        cout<<"it positive number";
    }else if(a<0){
        cout<<"it negative number";
    }
  return 0;
}