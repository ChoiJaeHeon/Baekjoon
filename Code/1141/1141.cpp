#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int num;
    string s; // 단어를 입력받을 때 사용할 문자열
    vector<string> v; // 비교할 단어들의 집합
    string temp; // 접두사인지 검증받을 단어를 임시로 저장해줄 문자열

    cin >> num;

    for (int i = 0; i < num; i++) { // 단어 입력 받아서 vector에 저장
        cin >> s;
        v.push_back(s);
    } 

    sort(v.begin(), v.end()); // 정렬

    int cnt = num; // 접두사가 아닌 단어의 개수, 처음에는 전체단어이고 접두사로 판정되면 1씩 빼준다

    for (int i = 0; i < num-1; i++) { // 마지막에는 한칸 덜감 (내부 반복문에서 마지막 단어(i+1)까지 비교하기 떄문)
        temp = v[i]; // 정렬 후 접두사인기 검증될 단어를 temp에 저장
        int j = v[i].size(); // 접두사의 후보의 크기를 저장
        if (temp == v[i+1].substr(0,j)) // substr() 활용하여 부분문자열을 비교한다
            cnt--; // 다른 단어의 접두사가 되는 단어가 존재한다면 cnt--;
    }

    cout << cnt;
    return 0;
}