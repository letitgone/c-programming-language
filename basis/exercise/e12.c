/**
 * @Author ZhangGJ
 * @Date 2021/01/10 23:25
 */
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, stats;

    stats = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (stats == IN) {
                putchar('\n');
                stats = OUT;
            }
        } else if (stats == OUT) {
            stats = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }
}
