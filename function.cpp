#include <iostream>
#include <math.h>
using namespace std;

bool pythagoren(int x, int y, int z);
int reverse(int num);
bool armstrong(int num);

int_fast32_t main()
{

    // Armstrong
    cout << "Enter three number: ";
    int num;
    cin >> num;

    armstrong(num);

/*  Reverse number
    cout << "Enter three number: ";
    int num;
    cin >> num;

    cout << reverse(num) << endl; */


    /*  Pythagoren Triplet____

        cout << "Enter three number: ";
        int x, y, z;
        cin >> x >> y >> z;

        if (pythagoren(x, y, z)){
            cout << "Pythagoren Triplet";
        }
        else{
            cout << "Not Pythagoren Triplet";
        }
    */

    return 0;
}

bool armstrong(int num){
    int sum = 1;
    int originalN = num;

    while(num > 0){
        int lastDigit = num % 10;
        sum += pow(lastDigit, 3);
        num /= 10;
    }

    if(originalN == sum){
        cout << "Armstrong";
    }else{
        cout << "Not Armstrong";
    }
}

bool pythagoren(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == (b * b + c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int reverse(int num){

    int reverse = 0;
    while(num > 0){
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num /= 10;
    }
    return reverse;
}