/*
 * A look at classes
 * g++ file
 * ./a.out
 */

#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
    public:             // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)

        void myMethod() {
            cout << "hello from myMethod!" << "\n";
        }

        void anotherMethod();

};

void MyClass::anotherMethod(){
    cout << "hello from another method!" << "\n";
}

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";
  myObj.myMethod();
  myObj.anotherMethod();

  // Print values
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString << "\n"; 
  return 0;
}
