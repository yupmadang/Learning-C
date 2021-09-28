#include <stdio.h>

int main (void){

    for(int num = 1; num < 100; num++) {
        if (num % 7 == 0 && num % 9 ==0){
            printf("%d 는 7과 9의 배수입니다. \n" , num);
        }

        else if (num % 7 == 0) {
            printf("%d 는 7의 배수입니다. \n" , num);
        }

        else if (num % 9 == 0) {
            printf("%d 는 9의 배수입니다. \n" , num);
        }


    }

    return 0;

}