#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {

    int n;
    long long res = 0;

    cin >> n;

    res = factorial(n);

    cout << res;
    return 0;
}