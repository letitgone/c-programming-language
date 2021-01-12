/**
 * @Author ZhangGJ
 * @Date 2021/01/12 23:21
 */
#include <stdio.h>

# define MAXHIST 15
# define MAXWORD 11
# define IN 1
# define OUT 0

int main() {
    int c, i, nc, state;
    int len;
    int maxvalue;
    int ovflow;
    int wl[MAXWORD];

    state = OUT;
    nc = 0;
    ovflow = 0;
    for (int i = 0; i < MAXWORD; ++i) {
        wl[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (nc > 0) {
                if (nc < MAXWORD) {
                    ++wl[nc];
                } else {
                    ++ovflow;
                }
            }
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else {
            ++nc;
        }
    }
    maxvalue = 0;
    for (int j = 0; j < MAXWORD; ++j) {
        if (wl[j] > maxvalue) {
            maxvalue = wl[j];
        }
    }
    for (int k = 0; k < MAXWORD; ++k) {
        printf("%5d - %5d : ", k, wl[k]);
        if (wl[k] > 0) {
            if ((len = wl[k] * MAXHIST / maxvalue) <= 0) {
                len = 1;
            }
        } else {
            len = 0;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0) {
        printf("There are %d words >= %d\n", ovflow, MAXWORD);
    }
}
