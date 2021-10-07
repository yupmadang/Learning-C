#include <stdio.h>

int main (void){

    int arr1[3] = {1, 2, 3}; /* 배열 arr1 선언 */
    double arr2[3] = {1.1, 2.2, 3.3}; /* 배열 arr2 선언 */

    printf("%d %g \n", *arr1, *arr2); /* 포인터 주소 값 출력 : 1 1.1 출력 -> 배열의 이름이 배열의 첫 주소 값과 같다. */
    *arr1 += 100;
    *arr2 += 120.5;
    printf("%d %g \n", arr1[0],arr2[0]); /* 배열의 첫 자리의 값을 출력 */


    return 0;
}