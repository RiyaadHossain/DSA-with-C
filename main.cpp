#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows; j++){
            if (j <= rows - i){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}