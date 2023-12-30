#include <iostream>
#include <vector>

using namespace std;

int main() {

    int hour, min, sec = 0;
    vector<int> time;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> hour >> min >> sec;
            time.push_back(hour);
            time.push_back(min);
            time.push_back(sec);
        }

        if (time[2] > time[5]) {
            if (time[4] == 0) {
                time[3] -= 1;
                time[4] = 60;
            }
            time[4] -= 1;
            time.push_back(60 + time[5] - time[2]);
        }
        else
            time.push_back(time[5] - time[2]);

        if (time[1] > time[4]) {
            if (time[3] == 0) {
                time[2] -= 1;
                time[3] = 60;
            }
            time[3] -= 1;
            time.push_back(60 + time[4] - time[1]);
        }
        else
            time.push_back(time[4] - time[1]);

        time.push_back(time[3] - time[0]);       

        cout << time[8] << " " << time[7] << " " << time[6] << '\n';

        time.clear();
    }


    return 0;
}