#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size] = {0, };

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    } 

    int temp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}