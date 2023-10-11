#include <iostream>
#include <cmath>
using namespace std;

bool is_Prime(long long a) {
    for (long long i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main() {

    long long rep, num;

    cin >> rep;

    for (int i = 0; i < rep; i++) {
        cin >> num;
        if (num < 2)
            cout << 2 << '\n';
        else {
            while (true) {
                if (is_Prime(num))
                    break;
                num++;
            }
            cout << num << '\n';
        }
    }

    return 0;
}