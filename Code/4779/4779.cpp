#include <iostream>
#include <cmath>

using namespace std;

void cantor(int N) {
     
    int size = pow(3, N -1);

    if (N == 0) { // -의 길이가 1이 되었을때 비로소 출력
        cout << '-';
        return;
    }

    cantor(N -1); // -의 길이가 1이 아니면 1이 될떄까지 계속 재귀호출, 1일떄 한번에 출력
    for (int i = 0; i < size; i++) {
        cout << ' ';
    }
    cantor(N-1);
}

int main() {
    int N;

    while (cin >> N) { // 이렇게 하면 입력이 없을떄 끝나게 할 수 있음, 무한반복 X
        cantor(N);
        cout << "\n";
    }
    return 0;
}