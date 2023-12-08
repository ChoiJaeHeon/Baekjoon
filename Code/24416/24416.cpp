#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* answers = new int[n];
    answers[0] = 1;
    answers[1] = 1;

    for (int i = 2; i < n; i++)
    {
        answers[i] = answers[i - 1] + answers[i - 2];
    }

    cout << answers[n-1] << " " << n - 2;
    delete[] answers;
}