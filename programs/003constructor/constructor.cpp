/*
 * A look at constructors
 * g++ filename
 * ./a.out
 */

#include <iostream>
#include <string>
using namespace std;


class Car {
    public:
        string brand;
        string model;
        int year;
        Car (string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

class AnotherClass {
    public:
        string msg;
        AnotherClass(string str);
};

AnotherClass::AnotherClass(string str){
    msg = str;
}

int main(void){
    Car carObj1("BMW", "X5", 1999);
    AnotherClass test("hello");

    cout << carObj1.brand << "\n";
    cout << test.msg << "\n";
    return 0;
}


