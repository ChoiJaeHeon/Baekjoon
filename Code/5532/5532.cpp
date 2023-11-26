#include <iostream>

using namespace std;

int main() {

    int L, A, B, C, D = 0;
    int mod_1, mod_2 = 0;
    cin >> L >> A >> B >> C >> D;

    if (A % C == 0) {
        mod_1 = A / C;
    }
    if (A % C != 0) {
        mod_1 = (A / C) + 1;
    }
    if (B % D == 0) {
        mod_2 = B / D;
    }
    if (B % D != 0) {
        mod_2 = (B / D) + 1;
    }

    if (mod_1 >= mod_2) {
        cout << L - mod_1;
    }
    if (mod_1 < mod_2) {
        cout << L - mod_2;
    }
    return 0;
}