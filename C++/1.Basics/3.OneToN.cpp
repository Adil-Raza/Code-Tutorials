
/*
    Program which prints the series of number form 1 to N in the selected order (Ascending or Descending) by the user
    user will give value of N and then will select if he needs to print it in asc or desc order
*/

#include <iostream>

using namespace std;

int main() {
    int N, order;

    cout << "enter value of 'N' : " << endl;
    cin >> N;

    cout << "Input Ordering number: " << endl;
    cout << "1. Ascending. \n2. Descending. \n=> ";
    cin >> order;

    if(order != 1 && order != 2) {
        cout << "Invalid ordering selected! \nExiting..." << endl;
        return 0;
    }

    int iterator, increment;
    if(order == 1) {
        iterator = 1;
        increment = 1;
    } else {
        iterator = N;
        increment = -1;
    }

    cout << "Result:" << endl; 
    for(; (order == 1) ? iterator <= N : iterator > 0; iterator+=increment) {
        cout << iterator << endl;
    }

    return 0;
}