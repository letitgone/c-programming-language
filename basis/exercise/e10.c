/**
 * @Author ZhangGJ
 * @Date 2021/01/10 22:58
 */
#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        if (c == '\b') {
            printf("\\b");
        }
        if (c == '\\') {
            printf("\\\\");
        }
        if (c != '\b') {
            if (c != '\t') {
                if (c != '\\') {
                    putchar(c);
                }
            }
        }

    }
}
