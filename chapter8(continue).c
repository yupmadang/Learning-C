#include <stdio.h>

int main(void) {

    for (int Dan = 1; Dan < 10; Dan++) {
        if (Dan % 2 != 0) {
            continue;
        }

        for (int Num = 1; Num < 10; Num++) {
            if (Dan < Num) 
                break;
             printf("%d*%d=%d \n", Dan, Num, Dan * Num);
            
        }
    }
    return 0;
}