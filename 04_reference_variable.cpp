#include <iostream>
using namespace std;

int c = 42;

int main(){
    // ******************** Built in Datatypes **********************
    int c = 12;
    cout << "Variable c is: " << c << endl;
    cout << "Global variable c is: " << ::c << endl; // Scope resolution operator

    // ******************** Literals **********************
    float d = 13.4f;
    long double e = 21.4l;
    cout<< "d: " << d << endl << "e: " << e << endl;

    cout << sizeof(2.44) << endl; //double
    cout << sizeof(2.44f) << endl; //float
    cout << sizeof(2.44F) << endl;
    cout << sizeof(2.44l) << endl; // long double
    cout << sizeof(2.44L) << endl;

    // ******************** Reference Variables **********************
    float x = 20;
    float & y = x;
    cout<< "x: " << x << endl;
    cout<< "y: " << y << endl;

    // ******************** Typecasting **********************
    float z = 50.99;
    cout<< "z: " << z<< endl;
    cout<< "Typecasted z: " << (int)z << endl;
}
