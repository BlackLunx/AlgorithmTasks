//
// Created by Mikhail Zhelezin on 09.10.2023.
//
#include "testlib.h"

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int n = opt<int>(1);
    int m = opt<int>(2);
    printf("%d %d\n", n, m);
    for (int i = 0; i < n; ++i) {
        int x = rnd.next(1, 1000000);
        if (i != n - 1) {
            printf("%d ", x);
        } else {
            printf("%d", x);
        }
    }
    printf("\n");
    for (int i = 0; i < m; ++i) {
        int x = rnd.next(1, n), y = rnd.next(1, n);
        printf("%d %d\n", x, y);
    }

}