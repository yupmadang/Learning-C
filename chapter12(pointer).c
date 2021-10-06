#include <stdio.h>

int main(void) { /* 포인터 사용 예제 */

    int num1 = 100, num2 = 100;
    int* pnum; /*pnum 포인터 변수 선언, int형 선언으로 int형 정수의 주소 값을 저장할 수 있음.*/
    pnum = &num1; /*pnum 에 num1의 주소 값을 저장하고 있음 pnum이 num1을 가리킴*/
    (*pnum) += 30;

    pnum = &num2; /*pnum 에 num2의 주소 값을 저장하고 있음 pnum이 num2을 가리킴*/
    (*pnum) -= 30;

    printf("num1: %d, num2: %d \n", num1, num2);

    return 0;


}