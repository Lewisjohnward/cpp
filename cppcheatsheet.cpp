Types

Type   signed   format spec
short  yes        %hd
Unsigned short no %hu
Int yes %d
Unsigned int no %u
Long yes %ld
Unsigned long no %lu
Long long yes %lld
Unsigned long long no %llu

A literal is a hardcoded value in a program
Binary Ob
Octal O
Decimal - default
Hex Ox

E.g int d = 0xFFFF;

Integer literals can contain any number of single quotes (') for readability. They are ignored by the compiler 10000 = 10'000


#include <cstdio.h>

int main() {
Unsigned int a = 69;
printf("Yabba %x\n" +, a);
}

Sizeof(float)

Bool b1 = true;

Namespace
Std::byte

Arrays
Int array[] = {1, 2, 3, 4};

Loops
For(init; conditional; iteration statement) {
}

For(element-type element-name: Array-name){
}

For( int val : val-array) {
if (value > maximum) maximum = value
}

Strings
Char english[] ="A book holds a house of gold";
Char16_t Chinese = u"\u4e66\u81ea";

Multiline
Char str[] = "a"
"house";



User-defined types
Enumerations
Classes
Unions

enum class Race {
    Dinam,
    Teklan,
    Ivyn
};

/**************** Classes ******************************/
    /** Access specifiers **/
    public - accessible from outside class
    private - cannot be accessed from outside the class
    protected - cannot be accessed from outside the class but they can be accessed by 
                inherited classes
    BY DEFAULT, ALL MEMBERS OF A CLASS ARE PRIVATE IF NOT SPECIFIED

    class MyClass {             // The class
        public:                 // Access specifier
            int myNum;          // Attribute (int variable)
            string myString;    // Attribute (string variable)
    }

        /* public is an access specifier, members of the class are accessible
        * from outside
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
    
    /* A constructor is a special method that is automatically called when
     * an object of a class is created
     *
     * It has the same name as the class, it is always public, and does
     * not have a return value
     */

    class MyClass {
        public:
            MyClass() {
                cout << "Hello World!";
            }
    };

    int main(void){
        myClass myObj;
        return 0;
    }


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

    /**** Encapsulation ***/

    #include <iostream>
    using namespace std;

    class Employee {
        private:
            int salary;

        public:
            void setSalary(int s){
                salary = s;
            }

            int getSalary(){
                return salary;
            }
    };

    int main(void){
        Employee myObj;
        myObj.setSalary(50000);
        cout <<myObj.getSalary();
        return 0;
    }

    /*** Inheritance ***/
    /* Base class */
    class Vehicle {
        public:
            string brand = "Ford";
            void honk(){
                cout << "Tuut, tuut!"\n";
            }
    };
    
    /* Derived class */
    class Car: public Vehicle {
        public:
            string model = "Mustang";
    };

    int main(void){
        car myCar;
        myCar.honk();
        cout << myCar.brand + " " + myCar.model;
        return 0;
    }

    /*** Multilevel inheritance ***/
        /* Base class */
        class MyClass {
            public:
                void myFunction(){
                    cout << "Some content in parent class";
                }
        };
        /* Derived class(child) */
        class MyChild: public MyClass {
        };
        
        /* Derived class(grandchild) */
        class MyGrandChild: public MyChild {
        };
        
        int main(void){
            myGrandChild myObj;
            myObj.myFunction();
            return 0;
        }
    
    /** Multiple inheritance **/
    /** Access specifiers **/
    /** Polymorphism **/

    /** Files **/
        /* The fstream library to work with files 
         * To use the fstream library, include both <iostream> and <fstream>
         */
    
        /* There are three classes included in the fstream library */
        ofstream - Create and write to files
        ifstream - Reads from files
        fstream - A combo of ofstream and ifstream : create/read/write to files

        #include <iostream>
        #include <fstream>
        using namespace std;

        int main(void){
            ofstream MyFile("filename.txt");
            MyFile << "Hello to my new file" << "\n";
            MyFile.close();
            return 0;
        }

        


/************************************************/
    


Race langobard_race = Race::Aidan;

Unscoped enum declared with enum instead of enum class

Switch statement
Switch(condition){
    Case (case-a): {
        handle a
        break;
    }
    default:{
        handle default
    }
}  


