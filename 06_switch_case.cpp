#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18"<< endl;
        break;

    case 22:
        cout << "You are 22"<< endl;
        break;
    
    default:
        cout << "No case matched"<< endl;
        break;
    }
}