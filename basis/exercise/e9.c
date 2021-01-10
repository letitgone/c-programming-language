/**
 * @Author ZhangGJ
 * @Date 2021/01/10 22:52
 */
#include <stdio.h>

#define NONBLANK 'a'

int main() {
    int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            if (lastc != ' ') {
                putchar(c);
            }
        }
        lastc = c;
    }
}
