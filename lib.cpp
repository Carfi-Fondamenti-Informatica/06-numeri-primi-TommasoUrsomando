#include "lib.h"
int primo(int a) {
    int b = a - 1;
    do {
        int c;
        c = a % b;
        if (c == 0 ) {
            return 1;
        } else {
            b--;
        }
    } while (b>1);
    return 0;

}
