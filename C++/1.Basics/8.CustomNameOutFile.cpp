/*
    Till now when we compile our code, a.exe or a.out file is generated by default.
    But if we want to generate it with other name we can use the below command: 
    g++ -o <output file name> <file name to be compiled>

    ex: 
        g++ -o myExecutable.exe 8.CustomNameOutFile.cpp
    
        Then to execute:
            ./myExecutable.exe
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "This is a program which has custom output file name";
    cout << str;
    return 0;
}