#include <iostream>
using namespace std;

int square (int num) {
    int squ = 1;
    for (int i = 0; i < num; i++) {
        squ *= 10;
    }
    return squ;
}

int chk_size (int num) {
    int size = 1;

    while(num / 10 != 0) {
        num /= 10;
        size++;
    }

    return size;
}

int main() {
    int num = 0;
    int size;
    int target;
    cin >> target;
    int arr[7] = {0, };

    while (true) {
        size = chk_size(num);
        int pre = num;
        for (int i = 1; i <= size; i++) {
        arr[i] = pre / square(size - i);
        pre %= square(size - i);
        }
        
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            sum += arr[i];
        }

        if (sum + num == target) {
            cout << num;
            break;
        }

        if(num == target) {
            cout << 0;
            break;
        }
        num++;
    }
    return 0;
}