#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case; // 테스트 케이스의 횟수
    int rep; // 지원자의 숫자
    int n, m; // 지원자의 서류심사 성적, 면접 성적
    int cnt = 1; // 합격할 수 있는 인원 수(최소 1명(서류 1등)은 합격하니까 1로 초기화)
    vector<pair<int, int>> v; // 성적을 담아놓을 벡터

    cin >> test_case;

    for (int i = 0; i < test_case; i++) { // 성적 입력받아서 벡터에 저장
        cin >> rep;
        for (int j = 0; j < rep; j++) {
            cin >> n >> m;
            v.push_back(make_pair(n, m));
        }

        sort(v.begin(), v.end()); // 벡터를 정렬하면 서류심사 성적이 좋은 순으로 정렬됨

        int temp = v[0].second; // 임시로 면접 성적을 저장 할 변수

        for (int k = 1; k < rep; k++) { // 서류 2등부터 꼴등까지 반복문을 통해 비교
            if (v[k].second < temp) { // 만약 서류 k등인 사람이 상위 등수 사람보다 면접을 잘 봤다면
                cnt++; // 그 사람을 선발한다
                temp = v[k].second; // 선발 기준이 되는 면접 접수 갱신(하위 등수 후보자는 상위등수 보다 면접을 더 잘봐야 함으로 커트라인 상승)
            }           
        }
        cout << cnt << '\n';
        cnt = 1; // 다음 테스트를 위해 초기화
        v.clear(); // 다음 테스트를 위해 초기화
    }
    return 0;
}