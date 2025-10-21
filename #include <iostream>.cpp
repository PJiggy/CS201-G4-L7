#include <iostream>
using namespace std;

void BubbleSortAscend(int arr[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - pass - 1; i++) {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    BubbleSortAscend(arr, 5);
    return 0;
}
