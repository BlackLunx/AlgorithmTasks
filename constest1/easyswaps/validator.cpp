//
// Created by Mikhail Zhelezin on 09.10.2023.
//
#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 1e5, "n");
    inf.readSpace();
    int m = inf.readInt(1, 1e4, "m");
    inf.readEoln();
    for (int i = 0; i < n; ++i) {
        inf.readInt(1, 1e9, "n");
        inf.readSpace();
    }
    inf.readEoln();
    for (int i = 0; i < m; ++i) {
        inf.readInt(1, n, "x");
        inf.readSpace();
        inf.readInt(1, n, "y");
        inf.readEoln();
    }
    inf.readEof();
}