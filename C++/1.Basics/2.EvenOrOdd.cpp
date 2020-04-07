/*
    Program to print if the number entered by user is even or edd
*/

#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Enter the number to find that the number is 'ODD' or 'EVEN' : ";
    cin >> N;

    if(N % 2 == 0) {
        cout << N << " is EVEN" << endl;
    } else {
        cout << N << " is ODD" << endl;
    }

    return 0;
}