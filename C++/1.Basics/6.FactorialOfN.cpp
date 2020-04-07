/*
    program to find factorial of a user input number
    method 1: using recursion
    method 2: using non recursion
*/

#include <iostream>

using namespace std;

// supports factorial upto N = 20
long long int factorialNonRec(int); // Recursion solution
long long int factorialNonRec(int); // Non recursive solution

int main() {
    long N;

    cout << "Enter a number for which you want to find factorial of: ";
    cin >> N;

    cout << factorialNonRec(N) << endl;     // call whichever method you like, Recursion or non recursion

    return 0;
}

// Recursion
long long int factorialRec(int N) {
    if(N == 0) {
        return 1;
    } else if(N == 1 || N == 2) {
        return N;
    }

    return (long long int)N * factorialRec(N-1);
}

// Non Recursion
long long int factorialNonRec(int N){
    long long int result = 1;

    for(int iterator = N; iterator >= 1; iterator--) {
        result *= iterator;
    }

    return result;
}
