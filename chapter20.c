#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void reviseArr(int (*arr) [4], int len){ ���� ���α׷��� 3 2021.11 03 ���� 1��, 90�� ������ 2���� �迭

    int temp[4][4];
    int k = 0;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            temp[i][j] = arr[i][j];
        }
    }

    for(int i = len -1; i >= 0; i--){
        for(int j = 0; j < len; j++){
            arr[j][i] = temp[k][j];
        }
        k++;
    }

    printf("90�� ȸ�� \n");
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}

int main (void){

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++){
        reviseArr(arr, len);
        printf("\n");
    }
    return 0;
}*/

/*void arrs (int (*arr) [100], int len){ ���� ���α׷��� 3 ���� 2�� 2021.11.03

    int num = 0;
    int k = 0;
    while (k < len - 2) {

		
		for (int i = k; i < len - k; i++) {
			arr[k][i] = ++num;
		}

		
		for (int i = k + 1; i < len - k; i++) {
			arr[i][(len - k) - 1] = ++num;
		}

		
		for (int i = (len - k) - 2; i >= k; i--) {
			arr[(len - k) - 1][i] = ++num;
		}

		
		for (int i = (len - k) - 2; i > k; i--) {
			arr[i][k] = ++num;
		}

		k++;
	}

}

int main (void){

    int num;
    int arr[100][100];

    printf("���� �Է��ϼ��� : ");
    scanf("%d \n", &num);

    arrs(arr,num);
    
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}*/

/*int main (void){ ���� ���� �� �̸� 99���Ϸ� ��� ����3 2021. 11. 03 ���� 3��

    int i;

    printf("������ ���� : 0���� %d���� \n", RAND_MAX);
    for(int i = 0; i < 5; i++){
        printf("���� ���: %d \n", rand());
    }

    
    printf("������ ���� : 0���� 99���� \n", RAND_MAX);
    for(int i = 0; i < 5; i++){
        printf("���� ���: %d \n", rand()%100);
    }

    return 0;
}*/



/*int main (void){ ����ð��� ���ڷ� ���޹޾� �ֻ����� ���� ����ϴ� ���� 2021. 11. 03 ���� 4��

    srand((int)time(NULL));

    int dice1;
    int dice2;
    int method = rand() % 6 + 1;
    int method2 = rand() % 6 + 1;

    printf("ù �ֻ����� �� : %d \n", method);
    printf("�� ��° �ֻ��� �� : %d \n", method2);


    return 0; */

