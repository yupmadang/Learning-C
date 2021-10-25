#include <stdio.h>

/*int main (void){

    int villa [4][2];
    int popu;

    가구별 거주인원 입력
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 2; j++){
            printf("%d 층 %d 호 인구수: ",i+1,j+1);
            scanf("%d", &villa[i][j]);
        }
    }
    가구원 거주인원 출력
    for(int i =0; i < 4; i++){
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf("%d 층의 인구수: %d \n",i+1,popu);
    }

    return 0;
}

int main (void){  메모리 상의 배열 할당을 확인

    int arr[3][2];
    for(int i =0; i < 3; i++){
        for(int j =0; j < 2; j++){
            printf("%p \n", &arr[i][j]);
        }
    }

    return 0;
}

int main (void){ 2차원 배열의 여러가지 선언방식

    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int arr2[3][3]={
        {1},
        {4,5},
        {7,8,9}
    };

    int arr3[3][3]={1,2,3,4,5,6,7};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }

      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }



    return 0;
}

int main (void){ 3차원 배열의 선언과 접근 예제

    int mean = 0;
    int arr[3][3][2] = {
    {
        {70,80},
        {94,90},
        {70,85}
    },
    {
        {83,90},
        {95,60},
        {90,82}
    },
    {
        {98,89},
        {99,94},
        {91,87}
    }
    };

    for(int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++){
            mean += arr[0][i][j];
        }
    }
    printf("A 학급 평균 : %g \n", (double)mean/6);


    mean = 0;
    for(int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++){
            mean += arr[1][i][j];
        }
    }
    printf("B 학급 평균 : %g \n", (double)mean/6);

    mean = 0;
    for(int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++){
            mean += arr[2][i][j];
        }
    }
    printf("C 학급 평균 : %g \n", (double)mean/6);

    

    return 0;
}

int main (void){ 연습문제 1번 2021.10.25 2차원 배열을 이용한 구구단 출력

    int arr[3][9];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            arr[i][j] = (i+2)*(j+1);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main (void){ 연습문제 2번 2021.10.25 arr1을 이용한 arr2 초기화

    int arr1[2][4] = {1,2,3,4,5,6,7,8};
    int arr2[4][2];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            arr2[i][j] = arr1[j][i];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%2d",arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
int arr[5][5];

void StdScore (void){
    for(int i = 0; i < 4; i++){
        int sum = 0;
        printf("%d 번째 학생의 성적 입력 %d: ", i+1);
        for(int j = 0; j < 4; j++){
            printf("과목 %d: ", j+1);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][4] = sum;
    }
}

void ScoreSum (void){
    int sum = 0;
    for(int i = 0; i < 4; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            sum+=arr[i][j];
        }
        arr[4][i] = sum;
        arr[4][4] += sum;
    }
}

void ShowScore (void){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}

int main (void){

    StdScore();
    ScoreSum();
    ShowScore();

    return 0;
}*/
