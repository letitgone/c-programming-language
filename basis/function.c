/**
 * @Author ZhangGJ
 * @Date 2021/01/12 23:38
 */
#include <stdio.h>

int power(int base, int n);

int main() {
    int i;
    for (int i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}
