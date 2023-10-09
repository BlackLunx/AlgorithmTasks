//
// Created by Mikhail Zhelezin on 09.10.2023.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto& x: a) cin >> x;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        swap(a[x], a[y]);
    }
    for (auto& x: a) cout << x << ' ';
}
