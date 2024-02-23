#include <iostream>

using namespace std;

int main() {

    int age;
    int mul, min;

    while (true) {
        int total = 1;
        cin >> age;
        if (age == 0) {
            break;
        }
        for (int i=0; i < age; i++) {
            cin >> mul >> min;
            total = total * mul - min;
        }
        cout << total << '\n';
    }

    
    return 0;
}