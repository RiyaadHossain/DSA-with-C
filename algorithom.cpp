#include <iostream>
using namespace std;

int bubbleSort(int arr[5], int n);
int insertionSort(int arr[5], int n);
void swap(int *a, int *b);

int main()
{
    int arr[5] = {5, 3, 6, 2, 9};

    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


int insertionSort(int arr[5], int n){

    int j, current;
    for (int i = 1; i < n; i++){
        current = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > current){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
}

int bubbleSort(int arr[5], int n)
{

    int counter = 0;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *b = *a;
    *a = temp;
}