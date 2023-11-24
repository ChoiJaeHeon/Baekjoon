#include <iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX]; // 정렬된 순열을 담을 배열
bool visited[MAX]; // 백트레킹을 하며 이미 방문된 숫자인지를 판별

void dfs (int depth) {
    if (depth == M) {
        for (int i = 0; i < M; i++) { // 마지막 depth 까지 도착했다면, 순열 출력후 리턴
            cout << arr[i] << " ";
        }
        cout << '\n';
        return ;
    }
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) { // i 가 방문된 숫자가 아니라면 i를 방문하고 아니라면 다음 숫자로 넘어간다(n만큼 반복)
            visited[i] = true; // i 를 방문
            arr[depth] = i; // 깊이가 (depth) 일때 그 깊이에 i 를 넣는다
            dfs(depth + 1); // 다음 depth로 이동
            visited [i] = false; // 마지막 depth를 방문후 리턴 되었을때 visited를 초기화
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    dfs(0); // depth 0 부터 시작

    return 0;
}