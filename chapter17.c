#include <stdio.h>

/*void SwapPtr(int **p1, int **p2){ 변수를 변경하는 함수
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main (void){

    double num = 3.14; 다중포인터의 접근 예시
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);
    printf("%9g %9g \n", num, **dptr);
    ptr2 = *dptr;
    *ptr2 = 10.99;
    printf("%9g %9g \n", num, **dptr);
    
    *변수의 값을 서로 변경하는 예제

    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("%5d %5d \n", *ptr1, *ptr2);

    SwapPtr(&ptr1, &ptr2);
    printf("%5d %5d \n", *ptr1, *ptr2);

    
    return 0;
}

int main (void){ 포인터 배열과 포인터 배열의 포인터 형 예제

    int num1 = 10, num2 = 20, num3 = 30;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;

    int * ptrArr[] = {ptr1, ptr2, ptr3}; int형인 더블포인터 ptrArr (배열의 이름은 배열의 [0]부분의 주솟값과 일치한다)
    int **dptr = ptrArr; 더블포인터 dptr 와 ptrArr의 포인터 형은 일치한다.

    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));

    return 0;
}*/