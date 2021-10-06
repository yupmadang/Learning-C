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

int main (void){ /* 2021.10.06 포인터 문제 1번 */

    int num = 10;
    int *ptr1 = &num; /*ptr1 포인터가 num의 주소 값을 가리킴*/
    int *ptr2 = ptr1; /*ptr2 포인터가 ptr1의 주소 값을 가리킴 num=ptr1=ptr2 */

    (*ptr1)++; /*포인터 값 후위 증가*/
    (*ptr2)++; /*포인터 값 후위 증가*/
    printf("%d \n", num); /*같은 num 주소 값을 후위 증가 하면 num는 12로 최종 출력*/

    return 0;

}

int main (void){ /* 2021.10.06 포인터 문제 2번 */

	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2, *ptr3; /*포인터 선언 ptr3는 값을 뒤바꾸기 위한 선언*/
	ptr1 = &num1; /*ptr1에 num1 주소 값 저장*/
	ptr2 = &num2; /*ptr2에 num2 주소 값 저장*/

	printf("%d, %d \n", *ptr1, *ptr2);

	(*ptr1) += 10; /*num1+=10 과 같은 의미*/
	(*ptr2) -= 10; /*num2-=10 과 같은 의미*/

	printf("%d, %d \n", *ptr1, *ptr2);

	ptr3 = ptr1; /* 순서 바꾸는 코드*/
	ptr1 = ptr2;
	ptr2 = ptr3;

	printf("%d, %d \n", *ptr1, *ptr2);

	return 0;
}
