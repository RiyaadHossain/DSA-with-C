#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1){
        return true;
    }

    bool restArray = isSorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

void dec(int n){
    if(n == 0){
        return;
    }

    cout << n << endl;
    dec(n - 1);
}

void inc(int n){
    if(n == 0){
        return;
    }

    inc(n - 1);
    cout << n << endl;
}

// int lastOcc(int arr, int n, int i, int key) {
//     if(i == n){
//         return -1;
//     }

//     lastOcc(arr, n, i++, key);
//     if(arr[i] == key){
//         return i;
//     }
// }

void reverse(char arr[], int n, int i){


    if(i == n){
        return;
    }
    reverse(arr, n, i+1);
    cout << arr[i];
}

int main(){

    // int arr[3] = {1, 2, 1};
    // cout << isSorted(arr, 3);

    // inc(5);

    // cout << lastOcc(arr, 3, 0, 2);

    char arr[] = "hello";
    reverse(arr, 5, 0);

    return 0;
}