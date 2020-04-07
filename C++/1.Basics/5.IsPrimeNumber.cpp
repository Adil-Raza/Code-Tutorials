/*
    Program to check if the user input number is prime or not
*/

#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int);
vector<int> getDivisors(int);

int main() {
    int N;

    cout << "Enter the Number to check if it is prime or not: ";
    cin >> N;

    if(isPrime(N)) {
        cout << N << " is a prime number" << endl;
    } else {
        cout << N << " is not a prime number" << endl;
    }
    return 0;
}

bool isPrime(int N) {
    if(getDivisors(N).size() == 2){  // number is divisible by 1 and itself (counts to 2), is prime
        return true;
    } else {
        return false;
    }
}

vector<int> getDivisors(int N) {
    vector<int> divisorsList;

    for(int iterator = 1; iterator <= N; iterator++) {
        if(N % iterator == 0) {
            divisorsList.push_back(iterator);
        }
    }

    return divisorsList;
}