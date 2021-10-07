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
}*/

int main (void){

    int arr[3] = {11, 22, 33};
    int * ptr = arr;
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); printf("\n");


    return 0;
}



