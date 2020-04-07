/*
    Program to print hello world

    Prerequsite:
        - g++ should be installed in your system
        - check using => g++ --version
        - in linux system it will be auto installed, if not try installing with : sudo apt-get install g++
        - in widows you can setup it in vscode. follow the link for setup:  https://code.visualstudio.com/docs/cpp/config-mingw
            - Follow the steps till 'Check your MinGW installation'

    How to Run:
        - g++ <file name>   ie,. g++ 1.HelloWorld.cpp
            - this will generate a output executable file
        - ./a.exe   (in windows)
        - ./a.out   (in linux)
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout << "Hello, World" << endl; // endl specifies end of line, you can use \n also. But it's better to use endl when you want to include line break at the end.
    return 0;   // return 0 specifies successfull exit
}