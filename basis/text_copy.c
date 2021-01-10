/**
 * @Author ZhangGJ
 * @Date 2021/01/10 10:10
 */
#include <stdio.h>

int main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
