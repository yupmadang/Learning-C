#include <stdio.h>

/*void ShowArrayElem(int *param, int len){ 배열의 주소 값을 전달받는 함수 + 배열의 길이도 추가(???? 왜 ???)
    for (int i = 0; i < len ; i++){
        printf("%d ", param[i]);
    }
    printf("\n");
}

int main (void){

    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    ShowArrayElem(arr1, sizeof(arr1) / sizeof(int)); arr1의 주소 값을 복사하여 함수에 전달
    ShowArrayElem(arr2, sizeof(arr2) / sizeof(int)); arr2의 주소 값을 복사하여 함수에 전달


    return 0;
}

void ShowArrayElem(int *param, int len){ int *param을 사용하고 있지만 int param[]으로 선언 할 수도 있고 더 자주 쓰인다. 
    for (int i = 0; i < len ; i++){      (추가) 이 같은 선언은 매개변수에서만 허용한다.
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddArrayElem(int *param, int len, int add){ 배열의 값을 증가시키기 위한 함수
    for(int i = 0; i < len; i++){
        param[i] += add;
    }
}

int main (void){

    int arr[3] = {1, 2, 3};
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
    ShowArrayElem(arr,sizeof(arr) / sizeof(int));
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
    ShowArrayElem(arr,sizeof(arr) / sizeof(int));
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
    ShowArrayElem(arr,sizeof(arr) / sizeof(int));



    return 0;
}*/