#include <stdio.h>

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