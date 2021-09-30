#include <stdio.h>

int addNum(void) {

    int num;
    printf("인자를 입력하시오 : ");
    scanf("%d", &num);

    return num;
}

int maxNum(int num1, int num2, int num3) {

    if (num1 < num2) {

        return (num2 < num3) ? num3 : num2;

    }

    else {

        return (num1 > num3) ? num1 : num3;
    }
}

int minNum(int num1, int num2, int num3) {

    if (num1 < num2) {

        return (num1 < num3) ? num1 : num3;

    }

    else {

        return (num2 < num3) ? num2 : num3;

    }
}


int main(void) {

    int num1, num2, num3, result;

    printf("숫자를 크기별로 나열합니다. \n");

    num1 = addNum();
    num2 = addNum();
    num3 = addNum();

    result = maxNum(num1, num2, num3);
    printf("최댓값은 %d 입니다. \n", result);

    result = minNum(num1, num2, num3);
    printf("최솟값은 %d 입니다. \n", result);


    return 0;


}