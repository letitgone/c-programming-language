/**
 * @Author ZhangGJ
 * @Date 2021/01/10 10:24
 */
#include <stdio.h>

int main() {
    int c;
    while (c = getchar() != EOF) {
        printf("%d\n", c);
    }
    printf("%d - at EOF\n", c);
    return 0;
}
