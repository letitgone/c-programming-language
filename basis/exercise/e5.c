/**
 * @Author ZhangGJ
 * @Date 2021/01/10 09:55
 */
#include <stdio.h>

int main() {
    printf("Fahr Celsius\n");
    for (int fahr = 300; fahr > 0; fahr -= 20) {
        printf("%3d %6.0f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
    }
    return 0;
}
