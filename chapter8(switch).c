#include <stdio.h>

int main(void) {

    int Num, Result;

    printf("정수를 입력하세요 : ");
    scanf("%d", &Num);

    Result = Num / 10;

    switch (Result)
    {

    case 0 :
        printf("0 이상 10 미만");
        break;
    case 1:
        printf("0 이상 10 미만");
        break;
    case 2:
        printf("0 이상 10 미만");
        break;
    default:
        printf("수를 초과하였습니다");
    }
    return 0;
}