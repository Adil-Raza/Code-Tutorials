/*
    This program will demonstrate basic class structure.
    Class containing a private string member.
    Constructor to initialize that member.
    Class defines a getter and setter for that string member
    and Class will have a public member function to print a formatted message
*/

#include <iostream>
#include <string>

using namespace std;

class Sample {
    private:
        string name;

    public:
        Sample() {
            name = "Default name";    
        }

        Sample(string name) {   // overloading a constructor
            this->name = name;  // this is a pointer. so to access members of this we need to use arrow operator. As we have local valriable with same name we use this for distinction.
        }

        string getName() {
            return name;
        }

        void putName(string name) {
            this->name = name;
        }

        void customPrintMethod(){
            cout << "Hello from Sample class." << endl;
        }
} sampleObject1;  // remember that class in c++ ends with semicolon. We can create object in here too.


int main() {
    sampleObject1.putName("Sample Object 1");
    cout << "Name of sampleObject1 is: " << sampleObject1.getName() << endl;

    Sample sampleObject2("Sample Object 2");
    cout << "Name of sampleObject2 is: " << sampleObject2.getName() << endl;

    return 0;
}