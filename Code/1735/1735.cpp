#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
int main() {
    long long int num1, den1, num2, den2;
    long long int min;
    long long int res_num, res_den;

    cin >> num1 >> den1 >> num2 >> den2;

    min = GCD(den1, den2);
    res_den = den1 * den2 / min;
    res_num = (num1 * res_den / den1) + (num2 * res_den / den2);

    min = GCD(res_den, res_num);

    cout << res_num / min << ' ' << res_den / min;

    return 0;
}