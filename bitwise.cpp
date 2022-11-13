#include <bits/stdc++.h>
using namespace std;

int updateBit(int n, int value, int pos);

int main(){

    int result = updateBit(1010, 1, 1);
    cout << result;

    return 0;
}

int updateBit(int n, int value, int pos){ // n = 1010, value = 0001
    int mask = ~(1 << pos); // mask = 1101
    n = n | mask; // n = 1111
    return (n & (value << pos));
}