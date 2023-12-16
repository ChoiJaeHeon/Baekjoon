#include <iostream>

using namespace std;

void prt_star(int i, int j, int N) {
    if((i / N) % 3 == 1 && (j / N) % 3 == 1)
		cout << " ";
	else if(N == 1)
		cout << "*"; //크기가 1일때, 검사를 통과했을 떄
	else
		prt_star(i, j, N / 3); //크기가 1이 아니면 계속 재귀호출
	return;
}

int main() {

    int N;

    cin >> N;
    for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++)
			prt_star(i, j, N);
		cout << '\n';
	}
    return 0;
}
