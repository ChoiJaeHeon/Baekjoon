#include <iostream>
using namespace std;
void hanoi(int n, int start, int to, int bypass)
{
    if(n == 1)
        printf("%d %d\n", start, to);
    else
    { 
        hanoi(n-1,start,bypass,to); // n - 1개의 원판을 경유지로 이동
        cout << start << " " << to << '\n'; // 제일 큰 원판을 옮김
        hanoi(n-1,bypass,to,start); // n - 1 개의 원판을 경유지에서 목적지로 이동
    }
}
int main() {
    int num;
    cin >> num;
    cout << (1<<num) -1 << "\n"; // 비트연산 활용하여 출력
    hanoi(num,1,3,2);
}