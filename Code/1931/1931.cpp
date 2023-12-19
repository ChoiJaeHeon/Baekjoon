#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int rep;
    int start, end; // 회의 하나의 시작 시간, 끝나는 시간
    int now; // 현재 시간
    int cnt = 1; // 회의의 개수를 세 줄 변수
    
    vector<pair<int, int>> time; 

    cin >> rep;

    for (int i = 0; i < rep; i++) {
        cin >> start >> end;
        time.push_back(make_pair(end, start)); // end 를 먼저 넣어서 정렬에 용이하게 한다
    }

    sort(time.begin(), time.end()); // 정렬, #include <algorithm> 필수!

    now = time[0].first; // 첫번째 회의가 종료된 시간부터 계산
    for (int i = 1; i < rep; i++) {
        if (now <= time[i].second) { // 지금 시간 이 후에 시작 된 회의라면 OK
            cnt++;
            now = time[i].first; // 현재시간을 이 회의가 끝나는 시간으로 갱신
        }
    }

    cout << cnt;

    return 0;
}