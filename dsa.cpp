#include <iostream>
using namespace std;

int binarySearch(int arr [10], int n, int search);
int bubbleSearch(int arr [5], int n, int search);

int maint(){

    int array[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    cout << "Enter search Number: ";
    int search;
    cin >> search;

    int result = binarySearch(array, 10, search);

    return 0;
}

int bubbleSearch(int arr [5], int n, int search){
    return 0;
}

int binarySearch(int arr[10], int n, int search){

    int result;
    int start = 0;
    int last = n - 1;
    int mid = (start + last) / 2;

    while(start <= last){

        if(arr[mid] == search){
            return mid;
        }

        

    }

    return result;
}