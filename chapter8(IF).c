#include <stdio.h>

int main (void){

    /*for(int num = 1; num < 100; num++) {
        if (num % 7 == 0 && num % 9 ==0){
            printf("%d 는 7과 9의 배수입니다. \n" , num);
        }

        else if (num % 7 == 0) {
            printf("%d 는 7의 배수입니다. \n" , num);
        }

        else if (num % 9 == 0) {
            printf("%d 는 9의 배수입니다. \n" , num);
        }


    }*/

    int num1, num2, total;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num1);

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num2);

    if(num1 >= num2){

        total = num1 - num2;

        printf("%d - %d = %d ", num1,num2,total);
    }

    else {
        total = num2- num1;

        printf("%d - %d = %d ", num2,num1,total);
    }

    return 0;

}