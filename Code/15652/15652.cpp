#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int num, int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    else {
        for (int i = num; i <= n; i++) {
            arr[depth] = i;
            dfs(i, depth + 1); // num 을 쓰면 안됨, num 은 반복문을 한번 돌아도 변하지 않으니까 앞의 숫자 이하의 값이 계속 고려됨
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(1, 0);
    return 0;
}