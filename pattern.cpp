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

*/

/*
    Problem No: 4
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1

cout << "Enter a number: ";
int num;
cin >> num;

for (int i = num; i >= 1; i--){
    for (int j = 1; j <= i; j++){
        cout << j;
    }
    cout << endl;
}

*/

/*
    Problem No: 5
        1  
        0  1
        1  0  1
        0  1  0  1
        1  0  1  0  1

cout << "Enter a number: ";
int num;
cin >> num;

for (int i = 1; i <= num; i++){
    for (int j = 1; j <= i; j++){
        if((j+i) % 2 == 0){
            cout << "1" << "  ";
        }else{
            cout << "0" << "  ";
        }
    }
    cout << endl;
}

*/

/*
    Problem No: 6
        *  *  *  *  *  
       *  *  *  *  *
      *  *  *  *  *
     *  *  *  *  *
    *  *  *  *  *

cout << "Enter a number: ";
int num;
cin >> num;

for (int i = 1; i <= num; i++){
    for (int j = 1; j <= num - i; j++){
        cout << " ";
    }
    for (int k = 1; k <= num; k++){
        cout << "*  ";
    }
    cout << endl;
}

*/

/*
    Problem No: 7
        1 
       0 1
      1 0 1
     0 1 0 1
    1 0 1 0 1
    1 0 1 0 1
     0 1 0 1
      1 0 1
       0 1
        1

cout << "Enter a number: ";
int num;
cin >> num;

for (int i = 1; i <= num; i++){
    for (int j = 1; j <= num - i; j++){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        // cout << k << " ";
        if((k + i) % 2 == 0){
            cout << "1 ";
        }else{
            cout << "0 ";
        }
    }
    cout << endl;
}

for (int i = num; i >= 1; i--){
    for (int j = 1; j <= num - i; j++){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        // cout << k << " ";
        if((k + i) % 2 == 0){
            cout << "1 ";
        }else{
            cout << "0 ";
        }
    }
    cout << endl;
}

*/

/*
    Problem No: 8
                1  
             2  1  2
          3  2  1  2  3
       4  3  2  1  2  3  4
    5  4  3  2  1  2  3  4  5

cout << "Enter a number: ";
int num;
cin >> num;

for (int i = 1; i <= num; i++){
    for (int j = 1; j <= num - i; j++){
        cout << "   ";
    }
    for (int k = i; k >= 1; k--){
        cout << k << "  ";
    }
    for (int l = 2; l <= i; l++){
        cout << l << "  ";
    }

    cout << endl;
}

*/

/*
    Problem No: 8
                *  
             *  *  *
          *  *  *  *  *
       *  *  *  *  *  *  *
    *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *  *  *
       *  *  *  *  *  *  *
          *  *  *  *  *
             *  *  *
                *

*/

cout << "Enter a number: ";
int num;
cin >> num;

for (int i = 1; i <= num; i++){
    for (int j = 1; j <= num - i; j++){
        cout << "   ";
    }

    for (int k = 1; k <= i * 2 - 1; k++){
        cout << "*  ";
    }

    cout << endl;
}

for (int i = num; i >= 1; i--){
    for (int j = 1; j <= num - i; j++){
        cout << "   ";
    }

    for (int k = 1; k <= i * 2 - 1; k++){
        cout << "*  ";
    }

    cout << endl;
}

    return 0;
}