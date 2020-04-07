/*
    Program to list down all the divisors for a user input number
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> getDivisors(int);

int main(){
    int N;
    vector<int> divisorList;

    cout << "Enter the number you want to find the divisors for: ";
    cin >> N;

    divisorList = getDivisors(N);

    cout << divisorList.size() << " Number of Divisors found for " << N << endl;
    if(divisorList.size() > 0) {
        cout << "Here is the list of Divisors:" << endl;
    }
    for(vector<int>::iterator itr = divisorList.begin(); itr != divisorList.end(); itr++) {
        cout << *itr << endl;
    }

    return 0;
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