#include <iostream>

using namespace std;

int main() {

    int num;
    int total = 0;
    int hour, minute;

    for (int i = 0; i < 4; i++) {
        cin >> num;
        total += num;
    }

    hour = total / 60;
    minute = total % 60;

    cout << hour << '\n' << minute << '\n';

    return 0;
}