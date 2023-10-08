#include <iostream> //재커밋용 주석
#include <algorithm>

using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return (GCD(b, a % b));
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, a, b, max;
    cin >> num;

    for (int i = 0; i < num; i ++) {
        cin >> a >> b;
        max = GCD(a,b);
        cout << a * b / max << '\n';
    }
    return 0;
}