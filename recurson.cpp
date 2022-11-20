#include <bits/stdc++.h>
using namespace std;

void reverse(string str){

    if(str.length() == 0)
        return;

    char ch = str[0];
    reverse(str.substr(1));
    cout << ch;
}

string removeDup(string str){

    if(str.length() == 0)
        return "";

    char ch = str[0];
    string ros = removeDup(str.substr(1));

    if(ch == ros[0]){
        return ros;
    }else{
        return ch + ros;
    }
}

string removex(string str){

    if(str.length() == 0)
        return "";

    char ch = str[0];
    string ros = removex(str.substr(1));

    if(ch == 'x'){
        return ros + ch;
    }
    
    return ch + ros;
    
}

int main(){

    // 1. Factorial of n
    // 2. num power of pow
    // 3. Fibonacci of n

    // reverse("Riyad");
    // cout << removeDup("aaabbcdee");
    cout << removex("xxxaaaxxxbbcdxxee");

    return 0;
}