#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {

    int a, b;
    int min = 0;
    int max = 0;
    cin >> a >> b;

    max = GCD(a, b);
    min = a * b / GCD(a,b );

    cout << max << '\n' << min << '\n';

    return 0;
}