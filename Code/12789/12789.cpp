#include <iostream>
#include <stack>
 
using namespace std;
 
int arr[1001];
 
int main(void)
{
    int size, num = 1, cnt = 0;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    stack<int> s;

    for (int i = 0; i < size; i++) {
        if (s.empty() && cnt < size) {
            s.push(arr[cnt++]);
        }
        while (s.top() != num && cnt < size) {
            s.push(arr[cnt++]);
        }
        if (!s.empty() && s.top() == num) {
            s.pop();
            num++;
        } else {
            cout << "Sad" << '\n';
            return 0;
        }
    }
    cout << "Nice" <<'\n';
 
    return 0;
}