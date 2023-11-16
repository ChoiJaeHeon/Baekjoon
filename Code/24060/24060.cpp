#include <iostream>

using namespace std;

int cnt = 0;
int result = -1;
int M;

void merge(int A[], int p, int q, int r, int tmp[]) {
    int i = p; // 처음
    int j = q + 1; // 중앙
    int t = 0; // 끝
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {
            tmp[t++] = A[i++];
        } else {
            tmp[t++] = A[j++];
        }
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p;
    t = 0;
    while (i <= r) {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == M) {
            result = A[i - 1];
            break;
        }
    }
}

void merge_sort(int A[], int p, int r, int tmp[]) {
    int q;
    if (p < r) {
        q = (p + r) / 2;
        merge_sort(A, p, q, tmp);
        merge_sort(A, q + 1, r, tmp);
        merge(A, p, q, r, tmp);
    }
}

int main() {
    int N;

    cin >> N >> M;
    int* arr = new int[N];
    int* tmp = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    merge_sort(arr, 0, N - 1, tmp);
    cout << result << '\n';
    delete[] arr;
    delete[] tmp;
    return 0;
}
