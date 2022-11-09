#include <iostream>
using namespace std;

int longestSubarray(int arr[5], int n);

int main(){

    int array[5] = {2, 4, 6, 2, 5};
    int result = longestSubarray(array, 5);

    cout << result;

    return 0;
}

int longestSubarray(int arr[5], int n){

    int pd = arr[1] - arr[0];
    int curr = 2;
    int ans = 2;
    int i = 2;

    while(i < n){
        if(pd == arr[i] - arr[i-1]){
            curr++;
        }else{
            pd = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        i++;
    }

    return ans;
}