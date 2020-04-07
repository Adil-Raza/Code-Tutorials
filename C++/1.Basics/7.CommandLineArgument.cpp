/*
    Program to print the command line argument values provided by user
    user will provide 4 arguments
    1. string
    2. int
    3. float
    4. character
    Print all the arguments in its corresponding datatype

    How to run:
        - compile the file using the command: g++ <filename>    ie,. g++ 7.CommandLineArgument.cpp
        - run using: 
            - In windows: ./a.exe "here is a string" 12345 123.456 A
                - after a.exe the 4 arguments will be followed
            - In Linux: ./a.out "here is a string" 12345 123.456 A

*/

#include <iostream>
#include <string>
#include <stdlib.h> // for atoi(), atof()

using namespace std;

/*
    argc contains the number of arguments passed (count).
    argv is a 2d string matrix containing the values passed.

    In this program case:
        argc will have count of 5 ( one is a.exe and rest 4 is the arguments count )
        argv will contain: ["a.exe", "here is a string", "12345", "123.456", "A"]

    Note:
        - Every arguments passed will be string
        - you need to convert into respective datatype
*/
int main(int argc, char *argv[]) {
    if(argc < 5) {
        cout << "Please provide sufficient number of arguments. 4 arguments required (string, int, float, char)" << endl;
        cout << "Exiting..." << endl;
        return 0;
    }

    cout << "Total number of arguments passed: " << argc - 1 << endl;   // -1 because we need to exclude a.exe from arguments

    string firstString = argv[1];   // as 0th index contains "a.exe" so the user arguments will be from 1st index
    int secondInt = atoi(argv[2]);  // atoi() converts string to int
    float thirdFloat = atof(argv[3]);   // atof() converts string to float
    char fourthCharacter = argv[4][0];  // argv[4] contains a string and 0th index of that will contain a single character

    cout << "First String: " << firstString << endl;
    cout << "Second Int: " << secondInt << endl;
    cout << "Third Float: " << thirdFloat << endl;
    cout << "Fourth Char: " << fourthCharacter << endl;

    return 0;
}

/*
    Note: there are other methods to convert string to other type
        One of them is to use stoi(), stof()
        These two comes with <string> library
        This was added in c++11 standard, where as atoi() is a lagacy c standard which will only work with lagacy string array: char str[10];
        Where as stoi() works on new string standards too: string str;
*/