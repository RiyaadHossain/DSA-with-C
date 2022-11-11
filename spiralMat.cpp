#include<bits/stdc++.h>
using namespace std;

int main(){

    int multiMat[6][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}, {31, 32, 33, 34, 35, 36}};

    int n = 6, m = 6;

    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;

    while (row_start < n - 1 && column_start < m - 1)
    {
        // Col Start
        for (int i = column_start; i <= column_end; i++)
            cout << multiMat[row_start][i] << " - ";
        row_start++;

        cout << endl;


        // Row End
        for (int i = row_start; i <= row_end; i++)
            cout << multiMat[i][column_end] << " - ";
        column_end--;

        cout << endl;


        // Col End
        for (int i = column_end; i >= column_start; i--)
            cout << multiMat[row_end][i] << " - ";
        row_end--;

        cout << endl;


        // Row Start
        for (int i = row_end; i >= row_start; i--)
            cout << multiMat[i][column_start] << " - ";
        column_start++;

        cout << endl;

    }

    return 0;
}