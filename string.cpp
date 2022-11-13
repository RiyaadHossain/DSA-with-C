#include <bits/stdc++.h>
using namespace std;

int main(){

    string std = "boftjmrbftrwpo";

    int freq[26];

    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    for (int i = 0; i < std.length(); i++)
        freq[std[i] - 'a']++;

    int max = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++){
        if(freq[i] > max){
            max = freq[i];
            cout << i << endl;
            ans = i + 'a';
        }
    }

    cout << max << " " << ans;

    return 0;
}