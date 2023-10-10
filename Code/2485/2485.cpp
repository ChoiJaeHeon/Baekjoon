#include <iostream>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {
    int num, dist, max, max_tree;
    cin >> num;

    vector<int> a;
    vector<int> tree_dist;

    for (int i = 0; i < num; i++) {
        cin >> dist;
        a.push_back(dist);
    }

    for (int i = 1; i < num; i++) {
        dist = a[i]-a[i-1];
        tree_dist.push_back(dist);
    }

    max = GCD(tree_dist[0], tree_dist[1]);

    for (int i = 2; i < num; i++) {
        max = GCD(max, tree_dist[i]);
    }

    max_tree = ((a.back() - a.front()) / max) + 1;

    cout << max_tree - num;
    return 0;
}