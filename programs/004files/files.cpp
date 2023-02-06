/*
 *
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream MyFile("filename.txt");
    MyFile << "Hello to my new file" << "\n";
    MyFile.close();
    return 0;
}
