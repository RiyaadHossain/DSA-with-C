#include <iostream>
using namespace std;

int main(){

/*
    Problem No: 1
                *
              * *
            * * *
          * * * *
        * * * * * 
    
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
*/

/*
    Problem No: 2
        1
        22
        333
        4444
        55555

    cout << "Enter a number: ";
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
*/

/*
    Problem No: 3
        *                 * 
        * *             * *
        * * *         * * *
        * * * *     * * * *
        * * * * * * * * * *
        * * * * * * * * * *
        * * * *     * * * *
        * * *         * * *
        * *             * *
        *                 *

*/

    cout << "Enter a number: ";
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 1;j <= i; j++){
            cout << "* ";
        }
        int space = 2*num - 2*i;
        for (int k = 1;k <= space;k++){
            cout << "  ";
        }
        for (int j = 1;j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = num; i >= 1; i--){
        for (int j = 1;j <= i; j++){
            cout << "* ";
        }
        int space = 2*num - 2*i;
        for (int k = 1;k <= space;k++){
            cout << "  ";
        }
        for (int j = 1;j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}