#include <iostream>
#define MAX 9

using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int num, int depth) {
    if (depth == m) {
        for (int i = 0; i < depth; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return ;
    }
    else {
        for (int i = 1; i <= n; i++) {
            arr[depth] = i; 
            dfs(num + 1, depth +1);
        }
    }
}

int main() {

    cin >> n >> m;
    dfs (1, 0);
    return 0;
}