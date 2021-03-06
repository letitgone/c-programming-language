/**
 * @Author ZhangGJ
 * @Date 2021/01/10 10:03
 */
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    for (int fahr = LOWER; fahr < UPPER; fahr += STEP) {
        printf("%3d %6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
    }
    return 0;
}
