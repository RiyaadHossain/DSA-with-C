#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    int flag = 0;
    for (int i = 2; i <= num; i++){
        if(num % i == 0){
            flag = 1;
            cout << num << " - Number is not prime";
            break;
        }
    }

    if(flag == 0)
        cout << num << " - Number is prime";

    return 0;
}