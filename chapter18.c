#include <stdio.h>

/*void showArr(int (*ptr)[4], int len){ 배열의 값을 출력하는 함수
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

int sumArr(int arr[][4], int len){ 배열의 요소의 합을 산출하는 함수
    int sum = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }

    return sum;

}*/

/*nt main (void){

    /*int arrd2[3][3];

    printf("%d \n", arrd2); 2차원 배열의 주소의 의미 : arrd2[0] 와 arrd2 의 차이
    printf("%d \n", arrd2[0]); arrd2는 배열 전체의 주소 의미 but arrd2[0]는 첫번째 행의 주소를 나타냄.
    printf("%d \n\n", &arrd2[0][0]);

    printf("%d \n", arrd2[1]);
    printf("%d \n\n", &arrd2[1][0]);

    printf("%d \n", arrd2[2]);
    printf("%d \n\n", &arrd2[2][0]);

    printf("sizeof(arr2): %d \n", sizeof(arrd2)); arrd2는 전체 배열의 주소를 의미하기에 4*9 = 36 이 출력된다.
    printf("sizeof(arr2[0]): %d \n", sizeof(arrd2[0])); 각 행의 크기가 반환된다. 4*3 = 12 이 출력.
    printf("sizeof(arr2[1]): %d \n", sizeof(arrd2[1]));
    printf("sizeof(arr2[2]): %d \n", sizeof(arrd2[2]));*/

    /*int arr1 [2][3]; 이차원 배열의 포인터 형
    int arr2 [3][2];

    printf("arr1: %p \n", arr1);
    printf("arr1+1: %p \n", arr1+1); 포인터 연산 시 sizeof(int)*3 씩 증감하는 arr1
    

    printf("arr2: %p \n", arr2);
    printf("arr2+1: %p \n", arr2+1); 포인터 연산 시 sizeof(int)*2 씩 증감하는 arr2
    printf("arr2+2: %p \n", arr2+2);*/

    /*int arr1[2][2] = { 이차원 배열의 선언
        {1, 2}, {3, 4}
    };

    int arr2[3][2] = { 이차원 배열의 선언
        {1, 2}, {3, 4}, {5, 6}
    };

    int arr3[4][2] = { 이차원 배열의 선언
        {1, 2}, {3, 4}, {5, 6}, {7, 8}
    };

    int (*ptr)[2]; 가리키는 값이 int형이고 포인터 연산시 2칸을 건너뛰는 포인터 형

    ptr =arr1;
    printf("**show 2,2 arr** \n");
    for(int i = 0; i < 2; i++){
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    }

    ptr =arr2;
    printf("**show 3,2 arr** \n");
    for(int i = 0; i < 3; i++){
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    }

    ptr =arr3;
    printf("**show 4,2 arr** \n");
    for(int i = 0; i < 4; i++){
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    }*/

    /*int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
    int arrd2[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};

    int *whoA[4]={&num1, &num2, &num3, &num4}; 포인터 배열
    int (*whoB)[4] = arrd2; 배열 포인터

    printf("%2d %2d %2d %2d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
    for(int i = 0; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("%2d", whoB[i][j]);
        }
        printf("\n");
    }*/
    
    /*int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[3][4] = {1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5};

    showArr(arr1, sizeof(arr1)/sizeof(arr1[0])); 2차원 배열의 전체에서 가로 크기를 나눔으로 세로크기 즉 길이를 연산할 수 있다.
    showArr(arr2, sizeof(arr2)/sizeof(arr2[0]));
    printf("arr1의 합 : %d \n",sumArr(arr1, sizeof(arr1)/sizeof(arr1[0])));
    printf("arr2의 합 : %d \n",sumArr(arr2, sizeof(arr2)/sizeof(arr2[0])));

    return 0;
}*/