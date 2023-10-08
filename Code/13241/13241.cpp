#include <iostream>
#include <algorithm>

using namespace std;

long long int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return (GCD(b, a % b));
}
int main() {
    long long int a;
    long long int b;
    long long int res;

    cin >> a >> b;

    res = GCD(a, b);

    cout << a * b / res;

    return 0;
}