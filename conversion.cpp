#include <iostream>
using namespace std;

int binToDec(int num);

void main(){
    cout << "Enter binary number";
    int num;
    cin >> num;

    cout << binToDec(num);
}