#include <iostream>
#include <string>

using namespace std;

int main() {


    string str; // 입력 받은 문자열(식)
    string num = ""; // 문자열 중에 숫자 부분을 따로 저장
    bool flag = false; // 마이너스가 한번이라도 등장했는지 판단
    int res = 0; // 결과값(최소값)

    cin >> str;

    for (int i = 0; i <= str.size(); i++) {

        if (flag == false) { // 한 번도 마이너스가 나온 적 없을때
            if (str[i] == '+' || str[i] == '-' || i == str.size()) { // 부호 혹은 문자열 끝을 만났을떄
                if (str[i] == '+') {
                    res += stoi(num); //stoi 를 사용해서 문자열을 해당하는 숫자로 변환
                    num = ""; // 숫자 문자열 초기화
                }
                else if (str[i] == '-') { // 마이너스가 한번이라도 등장했다면
                    res += stoi(num); // 지금까지 나온건 일단 더해주고 (마이너스 앞 부분)
                    flag = true; // flag 를 true로 변경 (이 뒤에 나오는건 다 마이너스 연산하기 위함)
                    num = ""; // 숫자 문자열 초기화
                }
                else if (i == str.size()) { // 종료조건
                    res += stoi(num); // 마지막 숫자까지 계산
                }
            }
            else {
                num += str[i]; // 부호나 문자열의 끝이 아니라면 숫자이므로 숫자 문자열에 저장
            }
        }
        else { // 음수가 한번이라도 등장해서 flag가 true가 된 경우
            if (str[i] == '+' || str[i] == '-' || i == str.size()) {
                if (i == str.size()) { // 끝이면 마지막 숫자 빼기
                    res -= stoi(num);
                }
                else { // 끝이 아닌 모든 경우 마이너스 연산 수행 해주면 됨
                    res -= stoi(num); 
                    num = "";
                }
            }
            else
                num += str[i];
        }
    }

    cout << res;

    return 0;
}