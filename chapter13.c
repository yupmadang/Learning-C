#include <stdio.h>

/*int main (void){

    int arr1[3] = {1, 2, 3};  배열 arr1 선언 
    double arr2[3] = {1.1, 2.2, 3.3};  배열 arr2 선언 

    printf("%d %g \n", *arr1, *arr2);  포인터 주소 값 출력 : 1 1.1 출력 -> 배열의 이름이 배열의 첫 주소 값과 같다. 
    *arr1 += 100;
    *arr2 += 120.5;
    printf("%d %g \n", arr1[0],arr2[0]);  배열의 첫 자리의 값을 출력 


    return 0;
}

int main (void){

    int arr[3] = {1, 2, 3}; 배열 선언
    int *ptr = &arr[0]; 포인터 변수 ptr이 arr의 주소를 가지게 하기 위한 코드 int *ptr = arr; 과 같은 의미

    printf("%d %d \n", arr[0], ptr[0]);
    printf("%d %d \n", arr[1], ptr[1]);
    printf("%d %d \n", arr[2], ptr[2]);
    printf("%d %d \n", *arr, *ptr);

    return 0;
}

int main (void){

    int arr[3] = {11, 22, 33};
    int * ptr = arr;  == *ptr = &arr[0]; 와 같다.
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2)); 값이 1씩이 아닌 1*size of(int) 로 증가하므로 4 증가

    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); printf("\n");


    return 0;
} 

int main (void){ 문제 13-01-01 2021.10.07 : 배열을 선언하고 포인터 변수를 이용하여 배열의 값을 증가시키고 출력하시오.

    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];

    printf("%d %d %d %d %d", *ptr+2, *(ptr+1)+2, *(ptr+2)+2, *(ptr+3)+2, *(ptr+4)+2);


    return 0;
}

int main (void){ 13-01-01 다른 방식 풀이

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    int result;

    for(int i = 0; i < 5; i++){
       result = *(ptr+i)+2;
       printf("%d ", result);
    }

    return 0;
} 

int main (void){ 13-01-02 문제 풀이 2021.10.07 : ptr을 대상으로 덧셈연산을 수행하여 값을 증가시키고 출력하라

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    for(int i = 0; i < 5; i++){ ptr을 대상으로 덧셈연산을 수행하여 값을 증가시키는 코드
       *(ptr+i) += 2; 
    }

    for(int j = 0; j < 5; j++){ 변경된 배열의 값을 출력하는 코드
        printf("%d ",arr[j]);
    }

    return 0;

}*/