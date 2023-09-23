#include <iostream>
using namespace std;

int main() {
    int num;
    int cut;

    cin >> num >> cut;

    int arr[num] {0, };

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    
    int temp = 0;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << arr[cut -1];
    return 0;
}