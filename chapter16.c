#include <stdio.h>

/*int main (void){

    int villa [4][2];
    int popu;

    ������ �����ο� �Է�
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 2; j++){
            printf("%d �� %d ȣ �α���: ",i+1,j+1);
            scanf("%d", &villa[i][j]);
        }
    }
    ������ �����ο� ���
    for(int i =0; i < 4; i++){
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf("%d ���� �α���: %d \n",i+1,popu);
    }

    return 0;
}

int main (void){  �޸� ���� �迭 �Ҵ��� Ȯ��

    int arr[3][2];
    for(int i =0; i < 3; i++){
        for(int j =0; j < 2; j++){
            printf("%p \n", &arr[i][j]);
        }
    }

    return 0;
}

int main (void){ 2���� �迭�� �������� ������

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

int main (void){ 3���� �迭�� ����� ���� ����

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
    printf("A �б� ��� : %g \n", (double)mean/6);


    mean = 0;
    for(int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++){
            mean += arr[1][i][j];
        }
    }
    printf("B �б� ��� : %g \n", (double)mean/6);

    mean = 0;
    for(int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++){
            mean += arr[2][i][j];
        }
    }
    printf("C �б� ��� : %g \n", (double)mean/6);

    

    return 0;
}

int main (void){ �������� 1�� 2021.10.25 2���� �迭�� �̿��� ������ ���

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

int main (void){ �������� 2�� 2021.10.25 arr1�� �̿��� arr2 �ʱ�ȭ

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
        printf("%d ��° �л��� ���� �Է� %d: ", i+1);
        for(int j = 0; j < 4; j++){
            printf("���� %d: ", j+1);
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
