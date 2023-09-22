#include <iostream>
using namespace std;

int main() {
    int a, b, c, n;
    int x = 0;

    cin >> a >> b >> c >> n;
    if (a * n + b <=  c * n && a <= c) //n이 1 이상이라는 조건이 있기 떄문에 a <= c 조건 추가해야함
        cout << 1 << endl;
    else
        cout << 0 << endl;    

    return 0;
}