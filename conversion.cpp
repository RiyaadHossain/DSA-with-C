#include <iostream>
#include <string.h>
using namespace std;

int binToDec(int num);
int hexToDec(char str[100]);
int decToOct(int num);

int main(){
/*  cout << "Enter binary number: ";
    int num;
    cin >> num;
    cout << "Decimal: " << binToDec(num); */

/*  cout << "Enter HexaDecimal number: ";
    char hex[100];
    cin >> hex;
    cout << "Decimal: " << hexToDec(hex); */

/*  cout << "Enter Decimal number: ";
    int dec;
    cin >> dec;
    cout << "Octal: " << decToOct(dec); */

    

    return 0;
}

int decToOct(int num){
    int oct = 0, weight = 1;

    while(num > 0){
        int rem = num % 8;
        oct = oct * weight + rem;
        weight *= 10;
        num /= 8;
    }

    return oct;
}

int binToDec(int num){
    int dec = 0, weight = 1;

    while(num > 0){
        int rem = num % 10;
        dec = dec + rem * weight;
        weight *= 2;
        num /= 10;
    }

    return dec;
}


/* 
    HexaDecimal to Decimal -->

    1AC -> (1 * 16^2) + (A * 16^1) + (C * 16^0) = 428

*/
int hexToDec(char hex[100]){

    int dec = 0, weight = 1;
    int len = strlen(hex);

    for (int i = len - 1; i >= 0; i--){

        if(hex[i] >= '0' && hex[i] <= '9'){
            dec = dec + (hex[i] - '0') * weight;
        }else if(hex[i] >= 'A' && hex[i] <= 'F'){
            dec = dec + (hex[i] - 'A' + 10) * weight;
        }

        weight *= 16;
    }

    return dec;
}