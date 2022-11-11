#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;

    cout << *arr + 2 << " ";
    cout << *(ptr+1) << " ";

    return 0;
}