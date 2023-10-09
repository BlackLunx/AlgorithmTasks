//
// Created by Mikhail Zhelezin on 09.10.2023.
//
#include "testlib.h"
#include <vector>

using namespace std;

vector<int> RunSolution(int n) {
    int m = inf.readInt();
    vector<int> a(n);
    for (auto& x: a) x = inf.readInt();
    for (int i = 0; i < m; ++i) {
        int x = inf.readInt(), y = inf.readInt();
        x--, y--;
        swap(a[x], a[y]);
    }
    return a;
}

int main(int argc, char * argv[]) {
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    auto answer = RunSolution(n);
    for (int i = 0; i < n; ++i) {
        int pa = ouf.readInt();
        int ja = answer[i];
        if (ja != pa)
            quitf(_wa, "expected %d, found %d", ja, pa);
    }
    quitf(_ok, "Ok");
}