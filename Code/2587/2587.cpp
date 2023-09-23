#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int temp = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j+ 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    
    double avg = sum / 5;
    
    cout << avg << endl;
    cout << arr[2] << endl;
    return 0;
}