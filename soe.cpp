#include <bits/stdc++.h>
using namespace std;

void printPrimes(int n);

int main()
{

    printPrimes(50);

    return 0;
}

void printPrimes(int n)
{

    int numbers[n] = {0};

    for (int i = 0; i <= n; i++){
        numbers[i] = i;
    }

    for (int i = 2; i <= n; i++){
        if(numbers[i] == 0){
            for (int j = i * i; j <= n; j += i){
                numbers[j] = i;
            }
        }
    }

    for (int i = 2; i <= n; i++){
        if(numbers[i] == i)
            cout << numbers[i] << " ";
    }
}

/* void primeNumbers(int n){
    int prime[n] = {0};

    for (int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for (int j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++){
        if(prime[i] == 0)
            cout << i << " ";
    }
} */